#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a listint_t list.
 *
 * @head: header.
 * @n: data.
 *
 * Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	current = *head;
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (current)
		current->prev = new;
	*head = new;
	return (new);
}
