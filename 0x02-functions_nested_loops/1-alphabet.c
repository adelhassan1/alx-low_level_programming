#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: No return
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
