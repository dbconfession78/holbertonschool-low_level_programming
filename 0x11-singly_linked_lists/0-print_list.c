#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: a structure of type list_t
 * Return: number of list nodes
 */
/* printf allowed */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next; len++;
	}
	return (len);
}
