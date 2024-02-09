#include "main.h"
/**
 * _memset - fills the first n bytes pointed to by s with constant byte b
 * @s: pointer
 * @b: constant
 * @n: number of bytes
 * Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
