#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 *
 * @array: pointer to the first element.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: -1 on Null or the value.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%ld] = [%d]", i, array[i]);
			putchar('\n');
		}
		else
		{
			printf("Value checked array[%ld] = [%d]", i, array[i]);
			putchar('\n');
			return (i);
		}
	}
	return (-1);
}
