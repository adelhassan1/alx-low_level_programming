#include "main.h"
/**
 * _isdigit - check whether it's a digit or not
 * @c: par
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
