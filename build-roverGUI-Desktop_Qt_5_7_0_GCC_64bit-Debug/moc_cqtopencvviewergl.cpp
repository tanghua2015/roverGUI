/****************************************************************************
** Meta object code from reading C++ file 'cqtopencvviewergl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../roverGUI/cqtopencvviewergl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cqtopencvviewergl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CQtOpenCVViewerGl_t {
    QByteArrayData data[9];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CQtOpenCVViewerGl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CQtOpenCVViewerGl_t qt_meta_stringdata_CQtOpenCVViewerGl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CQtOpenCVViewerGl"
QT_MOC_LITERAL(1, 18, 16), // "imageSizeChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "outW"
QT_MOC_LITERAL(4, 41, 4), // "outH"
QT_MOC_LITERAL(5, 46, 9), // "showImage"
QT_MOC_LITERAL(6, 56, 7), // "cv::Mat"
QT_MOC_LITERAL(7, 64, 5), // "image"
QT_MOC_LITERAL(8, 70, 8) // "getImage"

    },
    "CQtOpenCVViewerGl\0imageSizeChanged\0\0"
    "outW\0outH\0showImage\0cv::Mat\0image\0"
    "getImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQtOpenCVViewerGl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   34,    2, 0x0a /* Public */,
       8,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 6,    7,
    0x80000000 | 6,

       0        // eod
};

void CQtOpenCVViewerGl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQtOpenCVViewerGl *_t = static_cast<CQtOpenCVViewerGl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: { bool _r = _t->showImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { cv::Mat _r = _t->getImage();
            if (_a[0]) *reinterpret_cast< cv::Mat*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CQtOpenCVViewerGl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CQtOpenCVViewerGl::imageSizeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CQtOpenCVViewerGl::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_CQtOpenCVViewerGl.data,
      qt_meta_data_CQtOpenCVViewerGl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CQtOpenCVViewerGl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQtOpenCVViewerGl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CQtOpenCVViewerGl.stringdata0))
        return static_cast<void*>(const_cast< CQtOpenCVViewerGl*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions_2_0"))
        return static_cast< QOpenGLFunctions_2_0*>(const_cast< CQtOpenCVViewerGl*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int CQtOpenCVViewerGl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CQtOpenCVViewerGl::imageSizeChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
