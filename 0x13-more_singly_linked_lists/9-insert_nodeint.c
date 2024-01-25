#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts
 * a new node at a given position.
 *
 * @head: header.
 * @idx: index.
 * @n: data.
 *
 * Return:  the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current)
	{
		if (i == idx - 1)
		{
			temp = current->next;
			current->next = new;
			new->next = temp;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
