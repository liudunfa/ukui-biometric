/****************************************************************************
** Meta object code from reading C++ file 'users.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/users.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'users.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Users_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Users_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Users_t qt_meta_stringdata_Users = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Users"
QT_MOC_LITERAL(1, 6, 9), // "userAdded"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "UserItem"
QT_MOC_LITERAL(4, 26, 4), // "user"
QT_MOC_LITERAL(5, 31, 11), // "userDeleted"
QT_MOC_LITERAL(6, 43, 11), // "onUserAdded"
QT_MOC_LITERAL(7, 55, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(8, 71, 4), // "path"
QT_MOC_LITERAL(9, 76, 13) // "onUserDeleted"

    },
    "Users\0userAdded\0\0UserItem\0user\0"
    "userDeleted\0onUserAdded\0QDBusObjectPath\0"
    "path\0onUserDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Users[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x08 /* Private */,
       9,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Users::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Users *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userAdded((*reinterpret_cast< const UserItem(*)>(_a[1]))); break;
        case 1: _t->userDeleted((*reinterpret_cast< const UserItem(*)>(_a[1]))); break;
        case 2: _t->onUserAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 3: _t->onUserDeleted((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Users::*)(const UserItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Users::userAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Users::*)(const UserItem & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Users::userDeleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Users::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Users.data,
    qt_meta_data_Users,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Users::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Users::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Users.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Users::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Users::userAdded(const UserItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Users::userDeleted(const UserItem & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
