#include "main.h"
/**
 * _strcmp - compartion
 * @s1: str1
 * @s2: str2
 * Return: 0 or positive or negative
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
