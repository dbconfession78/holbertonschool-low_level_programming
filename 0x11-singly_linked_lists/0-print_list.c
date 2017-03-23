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
	const list_t *temp_h = h;

	while (temp_h)
	{
		printf("[%d] %s\n", temp_h->len, temp_h->str);
		temp_h = temp_h->next; len++;
	}
	return (len);
}
