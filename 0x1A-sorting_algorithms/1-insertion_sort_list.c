#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: dll to sort
 * return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *prv, *nxt;

	if (list == NULL || *list == NULL || node_count(list) < 2)
		return;

	temp = (*list)->next;
	nxt = temp->next; prv = temp->prev;
	while (temp)
	{
		if (temp->n < prv->n)
		{
			while (prv && temp->n < prv->n)
			{
				/* next */
				if (nxt)
					nxt->prev = prv;

				/* temp */
				temp->next = prv;
				temp->prev = prv->prev;

				/* prev */
				if (prv->prev)
					prv->prev->next = temp;
				prv->prev = temp;
				prv->next = nxt;

				nxt = prv;
				prv = temp->prev;
				if ((*list)->prev)
					*list = (*list)->prev;
				print_list(*list);
			}
		}
		temp = nxt;
		if (temp != NULL)
		{
			nxt = temp->next; prv = temp->prev;
		}
	}
}

/**
 * node_count - returns the length of a doubly linked  listint_t list
 * @list: the list to measure
 * Return: the number of nodes in the list
 */

int node_count(listint_t **list)
{
	listint_t *ptr;
	int count = 0;

	ptr = *list;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
