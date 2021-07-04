#include <Python.h>
int Cadd(int m)
{
    return m+1;
}

static PyObject* add(PyObject* self, PyObject* args)
{
    int m;
 
    if (!PyArg_ParseTuple(args, "i", &m))
        return NULL;
 
    return Py_BuildValue("i", Cadd(m));
}

static PyObject* version(PyObject* self)
{
    return Py_BuildValue("s", "Version 1.0");
}
 
static PyMethodDef myMethods[] = {
    {"add", add, METH_VARARGS, "Add."},
    {"version", (PyCFunction)version, METH_NOARGS, "Returns the version."},
    {NULL, NULL, 0, NULL}
};
 
static struct PyModuleDef myModule = {
	PyModuleDef_HEAD_INIT,
	"myModule",
	"Add Module",
	-1,
	myMethods
};

PyMODINIT_FUNC PyInit_myModule(void)
{
    return PyModule_Create(&myModule);
}