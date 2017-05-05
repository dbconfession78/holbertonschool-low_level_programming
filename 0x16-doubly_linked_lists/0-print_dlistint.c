#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of dlistint_t list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return node_count;
}
