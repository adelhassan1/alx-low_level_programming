#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a listint_t linked list
 *
 * @head: header.
 * @index: index.
 *
 * Return: node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;

	}
	return (NULL);
}
