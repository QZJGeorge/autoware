/****************************************************************************
** Meta object code from reading C++ file 'route_tool.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/tier4_adapi_rviz_plugin/src/route_tool.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'route_tool.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tier4_adapi_rviz_plugins__RouteTool_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tier4_adapi_rviz_plugins__RouteTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tier4_adapi_rviz_plugins__RouteTool_t qt_meta_stringdata_tier4_adapi_rviz_plugins__RouteTool = {
    {
QT_MOC_LITERAL(0, 0, 35) // "tier4_adapi_rviz_plugins::Rou..."

    },
    "tier4_adapi_rviz_plugins::RouteTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tier4_adapi_rviz_plugins__RouteTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void tier4_adapi_rviz_plugins::RouteTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject tier4_adapi_rviz_plugins::RouteTool::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_default_plugins::tools::GoalTool::staticMetaObject>(),
    qt_meta_stringdata_tier4_adapi_rviz_plugins__RouteTool.data,
    qt_meta_data_tier4_adapi_rviz_plugins__RouteTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tier4_adapi_rviz_plugins::RouteTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tier4_adapi_rviz_plugins::RouteTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tier4_adapi_rviz_plugins__RouteTool.stringdata0))
        return static_cast<void*>(this);
    return rviz_default_plugins::tools::GoalTool::qt_metacast(_clname);
}

int tier4_adapi_rviz_plugins::RouteTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_default_plugins::tools::GoalTool::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
