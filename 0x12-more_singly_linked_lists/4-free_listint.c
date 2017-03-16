#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: list to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	temp_node = head;
	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
