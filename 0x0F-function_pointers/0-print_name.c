#include "function_pointers.h"

/**
 * print_name - printing a name.
 *
 * @name: pointer to a character array.
 * @f: function pointer that points to a function taking a char*
 * argument and returning void.
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
