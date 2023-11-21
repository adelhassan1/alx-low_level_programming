#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters.
 * @size: size of arr.
 * @c: the character to initialize the array with.
 * Return: arr.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
