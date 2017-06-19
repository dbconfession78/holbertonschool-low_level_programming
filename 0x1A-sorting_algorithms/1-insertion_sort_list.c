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

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	temp = (*list)->next;
	nxt = temp->next; prv = temp->prev;
	while (temp)
	{
		if (temp->n < prv->n)
			while (prv && temp->n < prv->n)
			{
				if (temp->next)
					temp->next->prev = temp->prev;
				/* next */
				if (nxt)
					nxt->prev = prv;
				else
					temp->next = NULL;
				/* temp */
				temp->next = prv;
				temp->prev = prv->prev;
				/* prev */
				if (prv->prev)
					prv->prev->next = temp;
				else
				{
					temp->prev = NULL; temp->next = *list;
					(*list)->prev = temp; *list = temp;
				}
				prv->prev = temp; prv->next = nxt;
				nxt = prv;
				prv = temp->prev;
				if ((*list)->prev)
					*list = (*list)->prev;
				print_list(*list);
			}
		temp = nxt;
		if (temp != NULL)
			nxt = temp->next; prv = temp->prev;
	}
}
