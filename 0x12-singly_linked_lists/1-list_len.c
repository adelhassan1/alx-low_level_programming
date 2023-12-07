#include "list.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: pointer to the list_t
 *
 * Return: len.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++
	}
	return (len);
}
