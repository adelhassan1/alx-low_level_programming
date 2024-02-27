#include "hash_tables.h"
/**
 * key_index - the index of a key.
 * @key: the key.
 * @size: size of the array.
 *
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0, j;

	for (j = 0; key[j]; j++)
		i += key[j];

	return (i % size);
}
