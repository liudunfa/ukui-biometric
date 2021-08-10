/****************************************************************************
** Meta object code from reading C++ file 'bioauth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bioauth/include/bioauth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bioauth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BioAuth_t {
    QByteArrayData data[17];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BioAuth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BioAuth_t qt_meta_stringdata_BioAuth = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BioAuth"
QT_MOC_LITERAL(1, 8, 12), // "authComplete"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "uid_t"
QT_MOC_LITERAL(4, 28, 3), // "uid"
QT_MOC_LITERAL(5, 32, 6), // "result"
QT_MOC_LITERAL(6, 39, 6), // "notify"
QT_MOC_LITERAL(7, 46, 7), // "message"
QT_MOC_LITERAL(8, 54, 12), // "frameWritten"
QT_MOC_LITERAL(9, 67, 8), // "deviceId"
QT_MOC_LITERAL(10, 76, 18), // "onIdentityComplete"
QT_MOC_LITERAL(11, 95, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(12, 120, 7), // "watcher"
QT_MOC_LITERAL(13, 128, 15), // "onStatusChanged"
QT_MOC_LITERAL(14, 144, 10), // "statusType"
QT_MOC_LITERAL(15, 155, 14), // "onFrameWritten"
QT_MOC_LITERAL(16, 170, 5) // "drvid"

    },
    "BioAuth\0authComplete\0\0uid_t\0uid\0result\0"
    "notify\0message\0frameWritten\0deviceId\0"
    "onIdentityComplete\0QDBusPendingCallWatcher*\0"
    "watcher\0onStatusChanged\0statusType\0"
    "onFrameWritten\0drvid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BioAuth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   55,    2, 0x08 /* Private */,
      13,    2,   58,    2, 0x08 /* Private */,
      15,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   14,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void BioAuth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BioAuth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authComplete((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->notify((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->frameWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onIdentityComplete((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 4: _t->onStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->onFrameWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BioAuth::*)(uid_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioAuth::authComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BioAuth::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioAuth::notify)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BioAuth::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioAuth::frameWritten)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BioAuth::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BioAuth.data,
    qt_meta_data_BioAuth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BioAuth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BioAuth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BioAuth.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BioAuth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BioAuth::authComplete(uid_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BioAuth::notify(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BioAuth::frameWritten(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
