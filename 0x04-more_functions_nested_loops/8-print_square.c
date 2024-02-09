#include "main.h"
/**
 * print_square - the name is a description
 * @size: this is also a descripe itself
 * Return: #
 */

void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			if (i == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
