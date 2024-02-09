#include "main.h"
/**
 * print_rev - print in reverse
 * @s: str
 * Return: str in rev
 */

void print_rev(char *s)
{
	int l;

	l = 0;
	while (s[l])
	{
		l++;
	}
	while (l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
