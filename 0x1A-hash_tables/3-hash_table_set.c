#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;
	hash_node_t *current_node;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return(0);
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	strcpy(new->key, key);
	strcpy(new->value, value);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];

	if (!current_node)
	{
		ht->array[index] = new;
		return (1);
	}
	return (0);
}
