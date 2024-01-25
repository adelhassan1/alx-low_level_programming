#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: header.
 *
 * Return: total.
*/

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current = head;

	if (!current)
		return (0);

	while (current)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
