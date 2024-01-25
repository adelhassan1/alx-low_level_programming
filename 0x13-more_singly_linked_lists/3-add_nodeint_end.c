#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: header.
 * @n: data.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;

	return (new);
}
