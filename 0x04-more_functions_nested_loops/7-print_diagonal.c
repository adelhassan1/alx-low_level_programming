#include "main.h"
/**
 * print_diagonal - diagonal
 * @n: times / printed
 * Return: diagonal
 */

void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(32);
			_putchar(92);
			if (i == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
