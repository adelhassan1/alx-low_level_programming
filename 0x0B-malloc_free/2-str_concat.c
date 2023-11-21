#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinating two str.
 * @s1: pointer to string 1.
 * @s2: pointer to string 1.
 * Return: new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j = -1, len1 = 0, len2 = 0, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	size = len1 + len2 + 1;

	concat = malloc(size * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (i = len1; s2[j]; i++)
		concat[i] = s2[j++];

	return (concat);
}
