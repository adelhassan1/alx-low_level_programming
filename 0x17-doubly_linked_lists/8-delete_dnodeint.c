#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head: header.
 * @index: index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	current = *head;
	while (current)
	{
		if (i == index)
		{
			if (!(current->prev) & !(current->next))
			{
				*head = NULL;
			}
			else if (!(current->prev))
			{
				current->next->prev = NULL;
				*head = current->next;
			}
			else if (!(current->next))
			{
				current->prev->next = NULL;
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);

}
