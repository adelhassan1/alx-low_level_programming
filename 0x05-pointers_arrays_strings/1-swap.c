#include "main.h"
/**
 * swap_int - swap two int
 * @a: int 1
 * @b: int 2
 * Return: a & b
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
