#include "main.h"

/**
 * print_last_digit - p
 * @n: j
 * Return: yes
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + 48);
	return (x);
}
