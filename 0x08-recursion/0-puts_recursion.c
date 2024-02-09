#include "main.h"
/**
 * _puts_recursion - printing a string
 * @s: string givin
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
