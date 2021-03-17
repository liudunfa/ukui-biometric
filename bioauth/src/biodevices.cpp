/*
 * Copyright (C) 2018 Tianjin KYLIN Information Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 * 
**/
#include "biodevices.h"
#include <QDBusInterface>
#include <QSettings>

#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>

#include "generic.h"


BioDevices::BioDevices(QObject *parent)
    : QObject(parent),
      isShowHotPlug(false)
{
    connectToService();
    getDevicesList();
}

void BioDevices::connectToService()
{
    qRegisterMetaType<DeviceInfo>();

    serviceInterface = new QDBusInterface(BIO_DBUS_SERVICE,
                                          BIO_DBUS_PATH,
                                          BIO_DBUS_INTERFACE,
                                          QDBusConnection::systemBus());

    connect(serviceInterface, SIGNAL(USBDeviceHotPlug(int, int, int)),
            this, SLOT(onUSBDeviceHotPlug(int,int,int)));
    serviceInterface->setTimeout(2147483647);
}

void BioDevices::onUSBDeviceHotPlug(int deviceId, int action, int devNumNow)
{
    qDebug() << deviceId << action << devNumNow;
    DeviceInfo *device;
    QString  text = "";
    if(action == -1){
        DeviceInfo *device = findDevice(deviceId);
        if(device)
             text = tr("Unplugging of %1 device detected").arg(bioTypeToString_tr(device->biotype));
    }

    getDevicesList();

    emit deviceCountChanged(deviceInfos.size());

    if(action == 1){
        DeviceInfo *device = findDevice(deviceId);
        if(device)
             text = tr("%1 device insertion detected").arg(bioTypeToString_tr(device->biotype));
    }

    if(isShowHotPlug && text != ""){
        QDBusInterface iface("org.freedesktop.Notifications",
                             "/org/freedesktop/Notifications",
                             "org.freedesktop.Notifications",
                             QDBusConnection::sessionBus());
        QList<QVariant> args;
        args<<(tr("biometric"))
           <<((unsigned int) 0)
          <<""
         <<tr("biometric")
        <<text
        <<QStringList()
        <<QVariantMap()
        <<(int)-1;
        iface.callWithArgumentList(QDBus::AutoDetect,"Notify",args);
    }
}


/**
 * 获取设备列表
 */
void BioDevices::getDevicesList()
{
    /* 返回值为 i -- int 和 av -- array of variant */
    QDBusMessage msg = serviceInterface->call("GetDevList");
    if(msg.type() == QDBusMessage::ErrorMessage){
        LOG() << msg.errorMessage();
        return;
    }
    /* 设备数量 */
    int deviceNum = msg.arguments().at(0).toInt();

    /* 读取设备详细信息，并存储到列表中 */
    QDBusArgument argument = msg.arguments().at(1).value<QDBusArgument>();
    QList<QVariant> infos;
    argument >> infos;

    for(auto info : deviceInfos)
        delete info;
    deviceInfos.clear();

    for(int i = 0; i < deviceNum; i++) {
        DeviceInfo *deviceInfo = new DeviceInfo;
        infos.at(i).value<QDBusArgument>() >> *deviceInfo;

        if(deviceInfo->device_available > 0)     //设备可用
            deviceInfos.push_back(deviceInfo);
    }
}


int BioDevices::count()
{
    return deviceInfos.size();
}

int BioDevices::getFeatureCount(int uid, int indexStart, int indexEnd)
{
    int res = 0;
    for(int i = 0; i < deviceInfos.count(); i++) {
        DeviceInfo *deviceInfo = deviceInfos.at(i);
        QDBusMessage featurecount = serviceInterface->call("GetFeatureList",deviceInfo->device_id,uid,indexStart,indexEnd);
        if(featurecount.type() == QDBusMessage::ErrorMessage)
        {
                qWarning() << "GetFeatureList error:" << featurecount.errorMessage();
        }else{
            res += featurecount.arguments().takeFirst().toInt();
        }
    }
    return res;
}

QMap<int, QList<DeviceInfo>> BioDevices::getAllDevices()
{
    QMap<int, QList<DeviceInfo>> devices;

    for(auto deviceInfo : deviceInfos) {
        devices[deviceInfo->biotype].push_back(*deviceInfo);
    }

    return devices;
}

QList<DeviceInfo> BioDevices::getDevices(int type)
{
    QList<DeviceInfo> devices;

    for(auto deviceInfo : deviceInfos) {
        if (deviceInfo->biotype == type)
            devices.push_back(*deviceInfo);
    }

    return devices;
}

void BioDevices::setIsShowHotPlug(bool isShow)
{
    isShowHotPlug = isShow;
}

DeviceInfo* BioDevices::getDefaultDevice(uid_t uid)
{
    if(deviceInfos.size() <= 0)
        return nullptr;

    QString defaultDeviceName;

    struct passwd *pwd = getpwuid(uid);
    QString userConfigFile = QString(pwd->pw_dir) + "/.biometric_auth/ukui_biometric.conf";
    QSettings userConfig(userConfigFile, QSettings::IniFormat);
	qDebug() << userConfig.fileName();
    defaultDeviceName = userConfig.value(DEFAULT_DEVICE).toString();
	qDebug() << defaultDeviceName;

    if(defaultDeviceName.isEmpty() || !findDevice(defaultDeviceName)) {
        QSettings sysConfig(GET_STR(CONFIG_FILE), QSettings::IniFormat);
        defaultDeviceName = sysConfig.value(DEFAULT_DEVICE).toString();
    }

    if(defaultDeviceName.isEmpty() || !findDevice(defaultDeviceName)){
        struct passwd *pwd1 = getpwuid(getuid());
        QString userConfigFile = QString(pwd->pw_dir) + "/.biometric_auth/ukui_biometric.conf";
        QSettings userConfig(userConfigFile, QSettings::IniFormat);
        defaultDeviceName = userConfig.value(DEFAULT_DEVICE).toString();


    }
    qDebug() << "default device: " << defaultDeviceName;

    if(defaultDeviceName.isEmpty())
        return nullptr;

    return findDevice(defaultDeviceName);
}

DeviceInfo* BioDevices::findDevice(const int id)
{
    for(auto deviceInfo : deviceInfos) {
        if(deviceInfo->device_id == id)
            return deviceInfo;
    }
    //qDebug() << deviceName << "doesn't exists";
    return nullptr;
}

DeviceInfo* BioDevices::findDevice(const QString &deviceName)
{
    for(auto deviceInfo : deviceInfos) {
        if(deviceInfo->device_shortname == deviceName)
            return deviceInfo;
    }
    qDebug() << deviceName << "doesn't exists";
    return nullptr;
}

DeviceInfo* BioDevices::getFirstDevice()
{
    if(!deviceInfos.isEmpty())
        return deviceInfos.at(0);

    return nullptr;
}

QString BioDevices::bioTypeToString_tr(int type)
{
    switch(type) {
    case BIOTYPE_FINGERPRINT:
        return tr("FingerPrint");
    case BIOTYPE_FINGERVEIN:
        return tr("FingerVein");
    case BIOTYPE_IRIS:
        return tr("Iris");
    case BIOTYPE_FACE:
        return tr("Face");
    case BIOTYPE_VOICEPRINT:
        return tr("VoicePrint");
    }
    return QString();
}
