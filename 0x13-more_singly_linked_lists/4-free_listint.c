#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: header.
 *
 * Return: no return.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
