#include "main.h"
/**
 * leet - 1337
 * @str: par
 * Return: leet
 */

char *leet(char *str)
{
	int i = 0;
	int k;
	char str1[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	while (str[i])
	{
		for (k = 0; k < 11; k++)
		{
			if (str[i] == str1[k])
				str[i] = rep[k];
		}
		i++;
	}
	return (str);
}
