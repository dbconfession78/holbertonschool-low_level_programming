#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: dll to sort
 * return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pn, *walk, *nn;

	if (list == NULL || *list == NULL || node_count(list) < 2)
		return;

	walk = *list;
	walk = walk->next;
	nn = walk->next;
	pn = walk->prev;

	while (walk)
	{
		if (walk->n < pn->n)
		{
			while (pn && walk->n < pn->n)
			{
				if (nn)
					nn->prev = pn;
				walk->next = pn;
				walk->prev = pn->prev;
				pn->next = nn;
				if (pn->prev != NULL)
					pn->prev->next = walk;
				pn->prev = walk;

				nn = pn;
				pn = walk->prev;
				if ((*list)->prev != NULL)
					*list = ((*list)->prev);
				print_list(*list);

			}
		}
		walk = walk->next;
		if (walk != NULL)
		{
			nn = walk->next;
			pn = walk->prev;
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

/**
 * print_nodes - debug tool that prints the current n value for pn, walk and nn
 * @pn: ptr to the initial node before walk
 * @walk: ptr to node in focus
 * @nn: ptr to ther initial node after walk
 * @expand: option to show the ->prev and ->next for each node
 * Return: void
 */
void print_nodes(listint_t *pn, listint_t *walk, listint_t *nn, int expand)
{
	printf("pn");
	if (pn == NULL)
		printf(": NULL");
	else
	{
		printf("->n: %d", pn->n);
		if (expand == 1)
		{
			printf("\n");
			printf("\t - pn->prev->n %d\n", pn->prev->n);
			printf("\t - pn->next->n %d\n", pn->next->n);
		}
	}

	printf("\n");

	printf("walk");
	if (walk == NULL)
		printf(": NULL");
	else
		printf("->n: %d", walk->n);
	printf("\n");

		printf("nn");
	if (nn == NULL)
		printf(": NULL");
	else
		printf("->n: %d", nn->n);
	printf("\n");
}
