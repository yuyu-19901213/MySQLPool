/****************************************************************************
** Meta object code from reading C++ file 'seasonPlan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../seasonPlan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seasonPlan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_seasonPlan_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_seasonPlan_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_seasonPlan_t qt_meta_stringdata_seasonPlan = {
    {
QT_MOC_LITERAL(0, 0, 10), // "seasonPlan"
QT_MOC_LITERAL(1, 11, 18), // "onSpringBtnclicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "onSummerBtnclicked"
QT_MOC_LITERAL(4, 50, 18), // "onAutumnBtnclicked"
QT_MOC_LITERAL(5, 69, 18), // "onWinterBtnclicked"
QT_MOC_LITERAL(6, 88, 15), // "onAddBtnclicked"
QT_MOC_LITERAL(7, 104, 19), // "QuerySeasonPlanFile"
QT_MOC_LITERAL(8, 124, 11) // "const char*"

    },
    "seasonPlan\0onSpringBtnclicked\0\0"
    "onSummerBtnclicked\0onAutumnBtnclicked\0"
    "onWinterBtnclicked\0onAddBtnclicked\0"
    "QuerySeasonPlanFile\0const char*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_seasonPlan[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 8,

       0        // eod
};

void seasonPlan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        seasonPlan *_t = static_cast<seasonPlan *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSpringBtnclicked(); break;
        case 1: _t->onSummerBtnclicked(); break;
        case 2: _t->onAutumnBtnclicked(); break;
        case 3: _t->onWinterBtnclicked(); break;
        case 4: _t->onAddBtnclicked(); break;
        case 5: { const char* _r = _t->QuerySeasonPlanFile();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject seasonPlan::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_seasonPlan.data,
      qt_meta_data_seasonPlan,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *seasonPlan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *seasonPlan::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_seasonPlan.stringdata0))
        return static_cast<void*>(const_cast< seasonPlan*>(this));
    return QWidget::qt_metacast(_clname);
}

int seasonPlan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE