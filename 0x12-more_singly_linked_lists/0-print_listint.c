#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to print
 * Return: number of nodes
 */
/* printf permitted */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
