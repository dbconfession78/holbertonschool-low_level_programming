#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: array of linked list_t structures to free
 * Return: void
 */
/* str needs to be duplicated */
/* can use strdup */
/* return NULL if failed */
void free_list(list_t *head)
{
	list_t *temp_node;

	if (!head)
		return;

	while (head)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}

}
