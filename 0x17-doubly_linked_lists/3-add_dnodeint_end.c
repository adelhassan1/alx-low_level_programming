#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: header.
 * @n: data.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current = *head;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	new->prev = current;

	return (new);
}
