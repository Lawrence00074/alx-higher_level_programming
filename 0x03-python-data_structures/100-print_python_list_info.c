#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - to Print the some basic info about Python lists
 * @p: PyObject
 *
 * Return: Nothing
 */

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int c;
	PyListObject *obj = (PyListObject *)p;

        printf("[*] Size of the Python List = %li\n", size);
        printf("[*] Allocated = %li\n", obj->allocated);
        for (c = 0; c < size; c++)
                printf("Element %i: %s\n", c, Py_TYPE(obj->ob_item[c])->tp_name);
}
