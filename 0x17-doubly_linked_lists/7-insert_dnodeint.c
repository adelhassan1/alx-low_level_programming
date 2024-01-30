#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 *
 * @h: header.
 * @idx: index.
 * @n: data.
 *
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	current = *h;
	if (idx == 0)
	{
		new->next = *h;
		current->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	while (current)
	{
		if (i == idx - 1)
		{
			new->prev = current;
			new->next = current->next;
			if (current->next)
				current->next->prev = new;
			else
				current = new;
			current->next = new;
			return (new);
		}
		i++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
