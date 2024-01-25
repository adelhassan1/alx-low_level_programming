#include "lists.h"

/**
 * pop_listint - function that deletes
 * the head node of a listint_t linked list.
 *
 * @head: header.
 *
 * Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
