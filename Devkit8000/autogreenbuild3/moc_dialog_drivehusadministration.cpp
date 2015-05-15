/****************************************************************************
** Meta object code from reading C++ file 'dialog_drivehusadministration.h'
**
** Created: Fri May 15 12:04:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog_drivehusadministration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_drivehusadministration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_drivehusAdministration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x08,
      53,   30,   30,   30, 0x08,
      73,   30,   30,   30, 0x08,
      93,   30,   30,   30, 0x08,
     115,   30,   30,   30, 0x08,
     137,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_drivehusAdministration[] = {
    "Dialog_drivehusAdministration\0\0"
    "on_btn_back_clicked()\0on_btn_ok_clicked()\0"
    "on_btn_up_clicked()\0on_btn_down_clicked()\0"
    "on_btn_up_2_clicked()\0on_btn_down_2_clicked()\0"
};

void Dialog_drivehusAdministration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_drivehusAdministration *_t = static_cast<Dialog_drivehusAdministration *>(_o);
        switch (_id) {
        case 0: _t->on_btn_back_clicked(); break;
        case 1: _t->on_btn_ok_clicked(); break;
        case 2: _t->on_btn_up_clicked(); break;
        case 3: _t->on_btn_down_clicked(); break;
        case 4: _t->on_btn_up_2_clicked(); break;
        case 5: _t->on_btn_down_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dialog_drivehusAdministration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_drivehusAdministration::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_drivehusAdministration,
      qt_meta_data_Dialog_drivehusAdministration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_drivehusAdministration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_drivehusAdministration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_drivehusAdministration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_drivehusAdministration))
        return static_cast<void*>(const_cast< Dialog_drivehusAdministration*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_drivehusAdministration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
