#include "main.h"

/**
 * _islower - checks for a lowercase
 *
 *@c: char
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
