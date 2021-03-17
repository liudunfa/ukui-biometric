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
#ifndef BIODEVICES_H
#define BIODEVICES_H

#include <QObject>
#include <QMap>
#include <QList>
#include "biotypes.h"

class QDBusInterface;

/*!
 * \brief The BioDevices class
 * this class saves the list of all device information
 * and list of available devices' info list for each uid
 */
class BioDevices : public QObject
{
    Q_OBJECT
public:
    explicit BioDevices(QObject *parent = nullptr);

    int count();
    QMap<int, QList<DeviceInfo>> getAllDevices();
    QList<DeviceInfo> getDevices(int type);
    DeviceInfo* getDefaultDevice(uid_t uid);
    DeviceInfo* findDevice(const QString &deviceName);
    DeviceInfo* findDevice(const int id);
    DeviceInfo* getFirstDevice();
    int getFeatureCount(int uid, int indexStart = 0, int indexEnd = -1);
    static QString bioTypeToString_tr(int type);
    void setIsShowHotPlug(bool isShow);

private:
    void connectToService();
    void getDevicesList();

signals:
    void deviceCountChanged(int newNum);

private slots:
    void onUSBDeviceHotPlug(int deviceId, int action, int devNumNow);

private:
    QDBusInterface                  *serviceInterface;
    QList<DeviceInfo*>               deviceInfos;        //the list of al device info
    bool                             isShowHotPlug;
};



#endif // BIODEVICES_H
