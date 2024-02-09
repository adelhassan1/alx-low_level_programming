#include "main.h"
/**
 * _strlen_recursion - lenght of string
 * @s: string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
