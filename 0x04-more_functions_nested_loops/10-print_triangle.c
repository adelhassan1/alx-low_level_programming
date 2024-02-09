#include "main.h"
/**
 * print_triangle - trinagle with #
 * @size: size of trinagle
 * Return: trinagle
 */

void print_triangle(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k > 0; k--)
				_putchar(32);
			for (k = 1; k <= i; k++)
				_putchar(35);
			if (i == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
