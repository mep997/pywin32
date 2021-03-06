// This file declares the IPropertyDescriptionSearchInfo Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration
#include "PythonCOM.h"
#include "PythonCOMServer.h"
#include "propsys.h"
class PyIPropertyDescriptionSearchInfo : public PyIPropertyDescription {
   public:
    MAKE_PYCOM_CTOR(PyIPropertyDescriptionSearchInfo);
    static IPropertyDescriptionSearchInfo *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *GetSearchInfoFlags(PyObject *self, PyObject *args);
    static PyObject *GetColumnIndexType(PyObject *self, PyObject *args);
    static PyObject *GetProjectionString(PyObject *self, PyObject *args);
    static PyObject *GetMaxSize(PyObject *self, PyObject *args);

   protected:
    PyIPropertyDescriptionSearchInfo(IUnknown *pdisp);
    ~PyIPropertyDescriptionSearchInfo();
};
