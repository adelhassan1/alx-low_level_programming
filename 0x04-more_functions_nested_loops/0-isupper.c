#include "main.h"
/**
 * _isupper - check whether the c is upper or not
 * @c: parameter
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
