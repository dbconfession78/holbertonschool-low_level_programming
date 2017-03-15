#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to print
 * Return: number of nodes
 */
/* printf permitted */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h->n == 0)
		printf("%d\n", 0);
	while (h->n)
	{
		i++;
		printf("%d\n",h->n);

		if (!h->next)
			break;
		h = h->next;
	}
	return (i);
}
