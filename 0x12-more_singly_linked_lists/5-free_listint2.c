#include "lists.h"

/**
 * free_listint2 -  ree a listint_t list
 * @head: list to free
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (!*head || !head)
		return;
	temp_node = *head;
	while (*head)
	{
		temp_node = *head;
		*head = temp_node->next;
		free(temp_node);
	}
}
