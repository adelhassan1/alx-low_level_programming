#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: str1
 * @src: str2
 * @n: bytes from src
 * Return: str1 + str2
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = 0;
	l = 0;
	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}
