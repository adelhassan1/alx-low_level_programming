#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: pointer.
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *now;

	while (head != NULL)
	{
		now = head;
		head = head->next;
		free(now->str);
		free(now);
	}
}
