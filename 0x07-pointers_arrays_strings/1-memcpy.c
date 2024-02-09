#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: paste here
 * @src: copy from
 * @n: number of bytes to be copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
