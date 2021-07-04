#include <Python.h>
int Cmul(int m, int n)
{
    return m*n;
}

static PyObject* mul(PyObject* self, PyObject* args)
{
    int m, n;
 
    if (!PyArg_ParseTuple(args, "i|i", &m, &n))
        return NULL;
 
    return Py_BuildValue("i", Cmul(m, n));
}

static PyObject* version(PyObject* self)
{
    return Py_BuildValue("s", "Version 1.0");
}
 
static PyMethodDef myMethods[] = {
    {"mul", mul, METH_VARARGS, "Multiply."},
    {"version", (PyCFunction)version, METH_NOARGS, "Returns the version."},
    {NULL, NULL, 0, NULL}
};
 
static struct PyModuleDef myModule = {
	PyModuleDef_HEAD_INIT,
	"myModule",
	"Multiply Module",
	-1,
	myMethods
};

PyMODINIT_FUNC PyInit_myModule(void)
{
    return PyModule_Create(&myModule);
}