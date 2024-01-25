#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head: header.
 * @index: index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (index == 0 && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current)
	{
		if (i == index - 1)
			temp = current;
		if (i == index)
		{
			temp->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
