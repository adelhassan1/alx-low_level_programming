#include "main.h"
/**
 * _strlen - lenght
 * @s: par
 * Return: lenght
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
