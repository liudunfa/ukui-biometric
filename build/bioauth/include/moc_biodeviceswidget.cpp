/****************************************************************************
** Meta object code from reading C++ file 'biodeviceswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bioauth/include/biodeviceswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'biodeviceswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BioDevicesWidget_t {
    QByteArrayData data[15];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BioDevicesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BioDevicesWidget_t qt_meta_stringdata_BioDevicesWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BioDevicesWidget"
QT_MOC_LITERAL(1, 17, 4), // "back"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "deviceChanged"
QT_MOC_LITERAL(4, 37, 10), // "DeviceInfo"
QT_MOC_LITERAL(5, 48, 6), // "device"
QT_MOC_LITERAL(6, 55, 18), // "deviceCountChanged"
QT_MOC_LITERAL(7, 74, 5), // "count"
QT_MOC_LITERAL(8, 80, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(9, 99, 16), // "on_btnOK_clicked"
QT_MOC_LITERAL(10, 116, 26), // "on_lwDevices_doubleClicked"
QT_MOC_LITERAL(11, 143, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 155, 37), // "on_cmbDeviceTypes_currentInde..."
QT_MOC_LITERAL(13, 193, 5), // "index"
QT_MOC_LITERAL(14, 199, 20) // "onDeviceCountChanged"

    },
    "BioDevicesWidget\0back\0\0deviceChanged\0"
    "DeviceInfo\0device\0deviceCountChanged\0"
    "count\0on_btnBack_clicked\0on_btnOK_clicked\0"
    "on_lwDevices_doubleClicked\0QModelIndex\0"
    "on_cmbDeviceTypes_currentIndexChanged\0"
    "index\0onDeviceCountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BioDevicesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    1,   66,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void BioDevicesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BioDevicesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->deviceChanged((*reinterpret_cast< const DeviceInfo(*)>(_a[1]))); break;
        case 2: _t->deviceCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_btnBack_clicked(); break;
        case 4: _t->on_btnOK_clicked(); break;
        case 5: _t->on_lwDevices_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_cmbDeviceTypes_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onDeviceCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BioDevicesWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioDevicesWidget::back)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BioDevicesWidget::*)(const DeviceInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioDevicesWidget::deviceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BioDevicesWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioDevicesWidget::deviceCountChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BioDevicesWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BioDevicesWidget.data,
    qt_meta_data_BioDevicesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BioDevicesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BioDevicesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BioDevicesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BioDevicesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void BioDevicesWidget::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BioDevicesWidget::deviceChanged(const DeviceInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BioDevicesWidget::deviceCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
