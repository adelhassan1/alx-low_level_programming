#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array.
 *
 * @array: pointer to the first element.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index or -1 if Null.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, mid, i;

	if (!array || size == 0)
		return (-1);

	while (lo <= hi)
	{
		mid = (hi + lo) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
			if (i == hi)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		putchar('\n');
		if (array[mid] > value)
		{
			hi = mid - 1;
		}
		else if (array[mid] < value)
		{
			lo = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
