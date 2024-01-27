#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: header.
 *
 * Return: total.
*/

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
