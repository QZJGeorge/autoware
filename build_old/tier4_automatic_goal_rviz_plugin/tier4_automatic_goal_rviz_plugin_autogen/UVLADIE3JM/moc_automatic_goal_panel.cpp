/****************************************************************************
** Meta object code from reading C++ file 'automatic_goal_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/tier4_automatic_goal_rviz_plugin/src/automatic_goal_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'automatic_goal_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalPanel_t {
    QByteArrayData data[13];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalPanel_t qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalPanel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "rviz_plugins::AutowareAutomat..."
QT_MOC_LITERAL(1, 41, 16), // "onToggleLoopList"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 7), // "checked"
QT_MOC_LITERAL(4, 67, 16), // "onToggleAutoMode"
QT_MOC_LITERAL(5, 84, 28), // "onToggleSaveGoalsAchievement"
QT_MOC_LITERAL(6, 113, 11), // "onClickPlan"
QT_MOC_LITERAL(7, 125, 12), // "onClickStart"
QT_MOC_LITERAL(8, 138, 11), // "onClickStop"
QT_MOC_LITERAL(9, 150, 17), // "onClickClearRoute"
QT_MOC_LITERAL(10, 168, 13), // "onClickRemove"
QT_MOC_LITERAL(11, 182, 23), // "onClickLoadListFromFile"
QT_MOC_LITERAL(12, 206, 21) // "onClickSaveListToFile"

    },
    "rviz_plugins::AutowareAutomaticGoalPanel\0"
    "onToggleLoopList\0\0checked\0onToggleAutoMode\0"
    "onToggleSaveGoalsAchievement\0onClickPlan\0"
    "onClickStart\0onClickStop\0onClickClearRoute\0"
    "onClickRemove\0onClickLoadListFromFile\0"
    "onClickSaveListToFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__AutowareAutomaticGoalPanel[] = {

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
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       5,    1,   70,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::AutowareAutomaticGoalPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutowareAutomaticGoalPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onToggleLoopList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onToggleAutoMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onToggleSaveGoalsAchievement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onClickPlan(); break;
        case 4: _t->onClickStart(); break;
        case 5: _t->onClickStop(); break;
        case 6: _t->onClickClearRoute(); break;
        case 7: _t->onClickRemove(); break;
        case 8: _t->onClickLoadListFromFile(); break;
        case 9: _t->onClickSaveListToFile(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::AutowareAutomaticGoalPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalPanel.data,
    qt_meta_data_rviz_plugins__AutowareAutomaticGoalPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::AutowareAutomaticGoalPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::AutowareAutomaticGoalPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "automatic_goal::AutowareAutomaticGoalSender"))
        return static_cast< automatic_goal::AutowareAutomaticGoalSender*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int rviz_plugins::AutowareAutomaticGoalPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
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
