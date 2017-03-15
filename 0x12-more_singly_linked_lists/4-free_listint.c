#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: list to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;
	int *n_ptr;

	if (!head)
		return;
	temp_node = head;
	while (temp_node->n)
	{
		n_ptr = &temp_node->n;
		free(n_ptr);
		if (temp_node->next)
			temp_node = temp_node->next;
	}
}
