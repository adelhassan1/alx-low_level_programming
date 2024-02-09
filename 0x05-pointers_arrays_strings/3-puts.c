#include "main.h"
/**
 * _puts - print a string
 * @str: par
 * Return: string
 */

void _puts(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
