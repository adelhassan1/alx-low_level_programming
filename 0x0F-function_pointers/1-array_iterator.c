#include "function_pointers.h"

/**
 * array_iterator - executing a function given
 * as parameter on each element of the array.
 *
 * @array: an array.
 * @size: the lenght of the array.
 * @action: a function pointer that returns a function.
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
