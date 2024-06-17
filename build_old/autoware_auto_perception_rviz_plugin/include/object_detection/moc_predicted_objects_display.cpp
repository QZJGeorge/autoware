/****************************************************************************
** Meta object code from reading C++ file 'predicted_objects_display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/autoware_auto_perception_rviz_plugin/include/object_detection/predicted_objects_display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'predicted_objects_display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay_t {
    QByteArrayData data[1];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay_t qt_meta_stringdata_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay = {
    {
QT_MOC_LITERAL(0, 0, 65) // "autoware::rviz_plugins::objec..."

    },
    "autoware::rviz_plugins::object_detection::PredictedObjectsDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay[] = {

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

void autoware::rviz_plugins::object_detection::PredictedObjectsDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject autoware::rviz_plugins::object_detection::PredictedObjectsDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<ObjectPolygonDisplayBase<autoware_auto_perception_msgs::msg::PredictedObjects>::staticMetaObject>(),
    qt_meta_stringdata_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay.data,
    qt_meta_data_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *autoware::rviz_plugins::object_detection::PredictedObjectsDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *autoware::rviz_plugins::object_detection::PredictedObjectsDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_autoware__rviz_plugins__object_detection__PredictedObjectsDisplay.stringdata0))
        return static_cast<void*>(this);
    return ObjectPolygonDisplayBase<autoware_auto_perception_msgs::msg::PredictedObjects>::qt_metacast(_clname);
}

int autoware::rviz_plugins::object_detection::PredictedObjectsDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ObjectPolygonDisplayBase<autoware_auto_perception_msgs::msg::PredictedObjects>::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
