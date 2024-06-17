/****************************************************************************
** Meta object code from reading C++ file 'route_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/tier4_adapi_rviz_plugin/src/route_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'route_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tier4_adapi_rviz_plugins__RoutePanel_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tier4_adapi_rviz_plugins__RoutePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tier4_adapi_rviz_plugins__RoutePanel_t qt_meta_stringdata_tier4_adapi_rviz_plugins__RoutePanel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "tier4_adapi_rviz_plugins::Rou..."
QT_MOC_LITERAL(1, 37, 15), // "onWaypointsMode"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "clicked"
QT_MOC_LITERAL(4, 62, 16), // "onWaypointsReset"
QT_MOC_LITERAL(5, 79, 16) // "onWaypointsApply"

    },
    "tier4_adapi_rviz_plugins::RoutePanel\0"
    "onWaypointsMode\0\0clicked\0onWaypointsReset\0"
    "onWaypointsApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tier4_adapi_rviz_plugins__RoutePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tier4_adapi_rviz_plugins::RoutePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoutePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onWaypointsMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onWaypointsReset(); break;
        case 2: _t->onWaypointsApply(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tier4_adapi_rviz_plugins::RoutePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_tier4_adapi_rviz_plugins__RoutePanel.data,
    qt_meta_data_tier4_adapi_rviz_plugins__RoutePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tier4_adapi_rviz_plugins::RoutePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tier4_adapi_rviz_plugins::RoutePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tier4_adapi_rviz_plugins__RoutePanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int tier4_adapi_rviz_plugins::RoutePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
