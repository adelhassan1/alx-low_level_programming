#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the node.
 * @str: string to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	size_t str_size = 0;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	first->str = strdup(str);
	while (str[str_size])
		str_size++;

	first->len = str_size;
	first->next = *head;
	*head = first;

	return (*head);
}
