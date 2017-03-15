#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list to print
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h->n)
	{
		i++;
		if (!h->next)
			break;
		h = h->next;
	}
	return (i);
}
