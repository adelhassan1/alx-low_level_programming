#include "main.h"
/**
 * rot13 - encode str to rot13
 * @str: string to be encoded
 * Return: encoded str
 */

char *rot13(char *str)
{
	int i = 0, k;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		for (k = 0; k < 52; k++)
		{
			if (str[i] == alpha[k])
			{
				str[i] = rot[k];
				break;
			}
		}
		i++;
	}
	return (str);
}
