#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: pointer to list_t.
 *
 * Return: the number of the nodes.
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
