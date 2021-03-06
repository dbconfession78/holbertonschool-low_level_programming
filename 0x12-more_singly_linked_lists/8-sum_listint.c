#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: list whose int data is summed
 * Return: sum of list int n values; 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum +=  head->n;
		head = head->next;
	}
	return (sum);
}
