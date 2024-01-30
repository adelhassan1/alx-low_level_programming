#include "lists.h"

/**
 * free_dlistint - function that frees a listint_t list.
 *
 * @head: header.
 *
 * Return: no return.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while ((current = head))
	{
		head = head->next;
		free(current);
	}
}
