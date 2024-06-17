/****************************************************************************
** Meta object code from reading C++ file 'display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/tier4_localization_rviz_plugin/src/pose_history_footprint/display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugins__PoseHistoryFootprint_t {
    QByteArrayData data[4];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__PoseHistoryFootprint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__PoseHistoryFootprint_t qt_meta_stringdata_rviz_plugins__PoseHistoryFootprint = {
    {
QT_MOC_LITERAL(0, 0, 34), // "rviz_plugins::PoseHistoryFoot..."
QT_MOC_LITERAL(1, 35, 19), // "updateVisualization"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 17) // "updateVehicleInfo"

    },
    "rviz_plugins::PoseHistoryFootprint\0"
    "updateVisualization\0\0updateVehicleInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__PoseHistoryFootprint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::PoseHistoryFootprint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PoseHistoryFootprint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateVisualization(); break;
        case 1: _t->updateVehicleInfo(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::PoseHistoryFootprint::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::MessageFilterDisplay<geometry_msgs::msg::PoseStamped>::staticMetaObject>(),
    qt_meta_stringdata_rviz_plugins__PoseHistoryFootprint.data,
    qt_meta_data_rviz_plugins__PoseHistoryFootprint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::PoseHistoryFootprint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::PoseHistoryFootprint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__PoseHistoryFootprint.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::MessageFilterDisplay<geometry_msgs::msg::PoseStamped>::qt_metacast(_clname);
}

int rviz_plugins::PoseHistoryFootprint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::MessageFilterDisplay<geometry_msgs::msg::PoseStamped>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
