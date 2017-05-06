#include "lists.h"
/**
 *sum_dlistint - returns the sum of all data (n) of a doubly linked list
 * @head: pointer to first node of doubly linked list
 * Return: sum of all data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
