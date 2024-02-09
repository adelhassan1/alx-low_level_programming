#include "main.h"
/**
 * reverse_array - rev content of arr
 * @a: array
 * @n: num of elements of arr
 * Return: rev arr
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = n - 1; i >= n / 2; i--)
	{
		c = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = c;
	}
}
