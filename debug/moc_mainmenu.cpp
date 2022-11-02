/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainmenu_t {
    QByteArrayData data[23];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainmenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainmenu_t qt_meta_stringdata_mainmenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mainmenu"
QT_MOC_LITERAL(1, 9, 11), // "setSelected"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "i"
QT_MOC_LITERAL(4, 24, 15), // "on_Line_clicked"
QT_MOC_LITERAL(5, 40, 19), // "on_Polyline_clicked"
QT_MOC_LITERAL(6, 60, 18), // "on_Polygon_clicked"
QT_MOC_LITERAL(7, 79, 15), // "on_Rect_clicked"
QT_MOC_LITERAL(8, 95, 17), // "on_Square_clicked"
QT_MOC_LITERAL(9, 113, 18), // "on_Ellipse_clicked"
QT_MOC_LITERAL(10, 132, 17), // "on_Circle_clicked"
QT_MOC_LITERAL(11, 150, 15), // "on_Text_clicked"
QT_MOC_LITERAL(12, 166, 24), // "on_contactButton_clicked"
QT_MOC_LITERAL(13, 191, 15), // "on_Move_clicked"
QT_MOC_LITERAL(14, 207, 17), // "on_Remove_clicked"
QT_MOC_LITERAL(15, 225, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(16, 247, 5), // "index"
QT_MOC_LITERAL(17, 253, 31), // "on_treeWidget_itemDoubleClicked"
QT_MOC_LITERAL(18, 285, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(19, 302, 4), // "item"
QT_MOC_LITERAL(20, 307, 6), // "column"
QT_MOC_LITERAL(21, 314, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(22, 337, 23) // "on_Testimonials_clicked"

    },
    "mainmenu\0setSelected\0\0i\0on_Line_clicked\0"
    "on_Polyline_clicked\0on_Polygon_clicked\0"
    "on_Rect_clicked\0on_Square_clicked\0"
    "on_Ellipse_clicked\0on_Circle_clicked\0"
    "on_Text_clicked\0on_contactButton_clicked\0"
    "on_Move_clicked\0on_Remove_clicked\0"
    "on_comboBox_activated\0index\0"
    "on_treeWidget_itemDoubleClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "on_actionNew_triggered\0on_Testimonials_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainmenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    0,   97,    2, 0x08 /* Private */,
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      17,    2,  111,    2, 0x08 /* Private */,
      21,    0,  116,    2, 0x08 /* Private */,
      22,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int,   19,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainmenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainmenu *_t = static_cast<mainmenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_Line_clicked(); break;
        case 2: _t->on_Polyline_clicked(); break;
        case 3: _t->on_Polygon_clicked(); break;
        case 4: _t->on_Rect_clicked(); break;
        case 5: _t->on_Square_clicked(); break;
        case 6: _t->on_Ellipse_clicked(); break;
        case 7: _t->on_Circle_clicked(); break;
        case 8: _t->on_Text_clicked(); break;
        case 9: _t->on_contactButton_clicked(); break;
        case 10: _t->on_Move_clicked(); break;
        case 11: _t->on_Remove_clicked(); break;
        case 12: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_treeWidget_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->on_actionNew_triggered(); break;
        case 15: _t->on_Testimonials_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject mainmenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainmenu.data,
      qt_meta_data_mainmenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mainmenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainmenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainmenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainmenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
