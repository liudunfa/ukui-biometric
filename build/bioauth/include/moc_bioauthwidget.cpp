/****************************************************************************
** Meta object code from reading C++ file 'bioauthwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bioauth/include/bioauthwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bioauthwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BioAuthWidget_t {
    QByteArrayData data[23];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BioAuthWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BioAuthWidget_t qt_meta_stringdata_BioAuthWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BioAuthWidget"
QT_MOC_LITERAL(1, 14, 16), // "switchToPassword"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "selectDevice"
QT_MOC_LITERAL(4, 45, 12), // "authComplete"
QT_MOC_LITERAL(5, 58, 5), // "uid_t"
QT_MOC_LITERAL(6, 64, 3), // "uid"
QT_MOC_LITERAL(7, 68, 3), // "ret"
QT_MOC_LITERAL(8, 72, 9), // "startAuth"
QT_MOC_LITERAL(9, 82, 10), // "DeviceInfo"
QT_MOC_LITERAL(10, 93, 6), // "device"
QT_MOC_LITERAL(11, 100, 14), // "setMoreDevices"
QT_MOC_LITERAL(12, 115, 7), // "hasMore"
QT_MOC_LITERAL(13, 123, 8), // "stopAuth"
QT_MOC_LITERAL(14, 132, 19), // "emitSwithToPassword"
QT_MOC_LITERAL(15, 152, 24), // "on_btnPasswdAuth_clicked"
QT_MOC_LITERAL(16, 177, 18), // "on_btnMore_clicked"
QT_MOC_LITERAL(17, 196, 19), // "on_btnRetry_clicked"
QT_MOC_LITERAL(18, 216, 15), // "onBioAuthNotify"
QT_MOC_LITERAL(19, 232, 9), // "notifyMsg"
QT_MOC_LITERAL(20, 242, 17), // "onBioAuthComplete"
QT_MOC_LITERAL(21, 260, 14), // "onFrameWritten"
QT_MOC_LITERAL(22, 275, 8) // "deviceId"

    },
    "BioAuthWidget\0switchToPassword\0\0"
    "selectDevice\0authComplete\0uid_t\0uid\0"
    "ret\0startAuth\0DeviceInfo\0device\0"
    "setMoreDevices\0hasMore\0stopAuth\0"
    "emitSwithToPassword\0on_btnPasswdAuth_clicked\0"
    "on_btnMore_clicked\0on_btnRetry_clicked\0"
    "onBioAuthNotify\0notifyMsg\0onBioAuthComplete\0"
    "onFrameWritten\0deviceId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BioAuthWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    2,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   86,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,
      20,    2,  102,    2, 0x08 /* Private */,
      21,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 9,    6,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void BioAuthWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BioAuthWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchToPassword(); break;
        case 1: _t->selectDevice(); break;
        case 2: _t->authComplete((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->startAuth((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< const DeviceInfo(*)>(_a[2]))); break;
        case 4: _t->setMoreDevices((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->stopAuth(); break;
        case 6: _t->emitSwithToPassword(); break;
        case 7: _t->on_btnPasswdAuth_clicked(); break;
        case 8: _t->on_btnMore_clicked(); break;
        case 9: _t->on_btnRetry_clicked(); break;
        case 10: _t->onBioAuthNotify((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onBioAuthComplete((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->onFrameWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BioAuthWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioAuthWidget::switchToPassword)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BioAuthWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioAuthWidget::selectDevice)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BioAuthWidget::*)(uid_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BioAuthWidget::authComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BioAuthWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BioAuthWidget.data,
    qt_meta_data_BioAuthWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BioAuthWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BioAuthWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BioAuthWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BioAuthWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void BioAuthWidget::switchToPassword()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BioAuthWidget::selectDevice()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BioAuthWidget::authComplete(uid_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
