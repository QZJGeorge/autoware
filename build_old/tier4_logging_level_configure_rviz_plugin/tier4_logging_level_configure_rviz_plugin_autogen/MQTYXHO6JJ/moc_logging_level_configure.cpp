/****************************************************************************
** Meta object code from reading C++ file 'logging_level_configure.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/tier4_logging_level_configure_rviz_plugin/include/tier4_logging_level_configure_rviz_plugin/logging_level_configure.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logging_level_configure.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugin__LoggingLevelConfigureRvizPlugin_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugin__LoggingLevelConfigureRvizPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugin__LoggingLevelConfigureRvizPlugin_t qt_meta_stringdata_rviz_plugin__LoggingLevelConfigureRvizPlugin = {
    {
QT_MOC_LITERAL(0, 0, 44), // "rviz_plugin::LoggingLevelConf..."
QT_MOC_LITERAL(1, 45, 13), // "onButtonClick"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 12), // "QPushButton*"
QT_MOC_LITERAL(4, 73, 6), // "button"
QT_MOC_LITERAL(5, 80, 4), // "name"
QT_MOC_LITERAL(6, 85, 5), // "level"
QT_MOC_LITERAL(7, 91, 18), // "updateButtonColors"
QT_MOC_LITERAL(8, 110, 18), // "target_module_name"
QT_MOC_LITERAL(9, 129, 13), // "active_button"
QT_MOC_LITERAL(10, 143, 14), // "changeLogLevel"
QT_MOC_LITERAL(11, 158, 9) // "container"

    },
    "rviz_plugin::LoggingLevelConfigureRvizPlugin\0"
    "onButtonClick\0\0QPushButton*\0button\0"
    "name\0level\0updateButtonColors\0"
    "target_module_name\0active_button\0"
    "changeLogLevel\0container"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugin__LoggingLevelConfigureRvizPlugin[] = {

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
       1,    3,   29,    2, 0x08 /* Private */,
       7,    2,   36,    2, 0x08 /* Private */,
      10,    2,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,    6,

       0        // eod
};

void rviz_plugin::LoggingLevelConfigureRvizPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoggingLevelConfigureRvizPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonClick((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->updateButtonColors((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPushButton*(*)>(_a[2]))); break;
        case 2: _t->changeLogLevel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugin::LoggingLevelConfigureRvizPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_rviz_plugin__LoggingLevelConfigureRvizPlugin.data,
    qt_meta_data_rviz_plugin__LoggingLevelConfigureRvizPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugin::LoggingLevelConfigureRvizPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugin::LoggingLevelConfigureRvizPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugin__LoggingLevelConfigureRvizPlugin.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int rviz_plugin::LoggingLevelConfigureRvizPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
