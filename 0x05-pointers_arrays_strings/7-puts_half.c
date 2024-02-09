#include "main.h"
/**
 * puts_half - half of str
 * @str: string
 * Return: half of str
 */

void puts_half(char *str)
{
	int l;
	int m;

	l = 0;
	while (str[l])
	{
		l++;
	}
	m = l / 2;
	if (m % 2 == 0)
		m++;
	while (str[m])
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
