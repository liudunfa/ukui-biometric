/****************************************************************************
** Meta object code from reading C++ file 'PolkitListener.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/PolkitListener.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolkitListener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolkitListener_t {
    QByteArrayData data[25];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolkitListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolkitListener_t qt_meta_stringdata_PolkitListener = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PolkitListener"
QT_MOC_LITERAL(1, 15, 22), // "initiateAuthentication"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "actionId"
QT_MOC_LITERAL(4, 48, 7), // "message"
QT_MOC_LITERAL(5, 56, 8), // "iconName"
QT_MOC_LITERAL(6, 65, 18), // "PolkitQt1::Details"
QT_MOC_LITERAL(7, 84, 7), // "details"
QT_MOC_LITERAL(8, 92, 6), // "cookie"
QT_MOC_LITERAL(9, 99, 25), // "PolkitQt1::Identity::List"
QT_MOC_LITERAL(10, 125, 10), // "identities"
QT_MOC_LITERAL(11, 136, 30), // "PolkitQt1::Agent::AsyncResult*"
QT_MOC_LITERAL(12, 167, 6), // "result"
QT_MOC_LITERAL(13, 174, 28), // "initiateAuthenticationFinish"
QT_MOC_LITERAL(14, 203, 20), // "cancelAuthentication"
QT_MOC_LITERAL(15, 224, 21), // "finishObtainPrivilege"
QT_MOC_LITERAL(16, 246, 19), // "startAuthentication"
QT_MOC_LITERAL(17, 266, 12), // "onShowPrompt"
QT_MOC_LITERAL(18, 279, 6), // "prompt"
QT_MOC_LITERAL(19, 286, 4), // "echo"
QT_MOC_LITERAL(20, 291, 11), // "onShowError"
QT_MOC_LITERAL(21, 303, 4), // "text"
QT_MOC_LITERAL(22, 308, 10), // "onShowInfo"
QT_MOC_LITERAL(23, 319, 10), // "onResponse"
QT_MOC_LITERAL(24, 330, 15) // "onAuthCompleted"

    },
    "PolkitListener\0initiateAuthentication\0"
    "\0actionId\0message\0iconName\0"
    "PolkitQt1::Details\0details\0cookie\0"
    "PolkitQt1::Identity::List\0identities\0"
    "PolkitQt1::Agent::AsyncResult*\0result\0"
    "initiateAuthenticationFinish\0"
    "cancelAuthentication\0finishObtainPrivilege\0"
    "startAuthentication\0onShowPrompt\0"
    "prompt\0echo\0onShowError\0text\0onShowInfo\0"
    "onResponse\0onAuthCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolkitListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    7,   64,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x0a /* Public */,
      14,    0,   80,    2, 0x0a /* Public */,
      15,    0,   81,    2, 0x0a /* Public */,
      16,    0,   82,    2, 0x08 /* Private */,
      17,    2,   83,    2, 0x08 /* Private */,
      20,    1,   88,    2, 0x08 /* Private */,
      22,    1,   91,    2, 0x08 /* Private */,
      23,    1,   94,    2, 0x08 /* Private */,
      24,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 9, 0x80000000 | 11,    3,    4,    5,    7,    8,   10,   12,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   18,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PolkitListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolkitListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initiateAuthentication((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const PolkitQt1::Details(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const PolkitQt1::Identity::List(*)>(_a[6])),(*reinterpret_cast< PolkitQt1::Agent::AsyncResult*(*)>(_a[7]))); break;
        case 1: { bool _r = _t->initiateAuthenticationFinish();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->cancelAuthentication(); break;
        case 3: _t->finishObtainPrivilege(); break;
        case 4: _t->startAuthentication(); break;
        case 5: _t->onShowPrompt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->onShowError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onShowInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onResponse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onAuthCompleted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolkitListener::staticMetaObject = { {
    &Listener::staticMetaObject,
    qt_meta_stringdata_PolkitListener.data,
    qt_meta_data_PolkitListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolkitListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolkitListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolkitListener.stringdata0))
        return static_cast<void*>(this);
    return Listener::qt_metacast(_clname);
}

int PolkitListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Listener::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
