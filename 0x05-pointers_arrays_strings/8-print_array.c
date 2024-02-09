#include "main.h"
#include <stdio.h>
/**
 * print_array - no need
 * @a: array
 * @n: number of elements
 * Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			continue;
		printf(", ");
	}
	printf("\n");
}
