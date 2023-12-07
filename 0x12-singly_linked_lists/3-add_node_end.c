#include "list.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 *
 * @head: pointer to the list.
 * @st: string to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	size_t str_size = 0;
	list_t *temp;

	last = malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);

	last->str = strdup(str);
	while (str[str_size])
		str_size++;

	last->len = str_size;
	last->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = last;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = last;
	}
	return (*head);
}
