#include "lists.h"

/**
 * list_len - returns the number of elements in a linked link_t list
 * @h: a structure of type list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
