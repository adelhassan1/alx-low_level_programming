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

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
		else
			return (0);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
			return (1);
		else
			return (0);
	}
	_putchar('\n');
}
