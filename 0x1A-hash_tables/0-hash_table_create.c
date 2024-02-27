#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of array.
 *
 * Return: pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *node;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(node) * size);
	if (!(table->array))
		return (NULL);
	table->size = size;
	return (table);
}
