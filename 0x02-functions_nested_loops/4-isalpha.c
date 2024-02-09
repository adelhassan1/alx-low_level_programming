#include "main.h"

/**
 * _isalpha - check alpha
 *
 * @c: parameter
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a', j = 'A'; i <= 'z', j <= 'Z'; i++, j++)
	{
		if (i == c || j == c)
			return (1);
	else
		return (0);
	}
	_putchar('\n');
}
