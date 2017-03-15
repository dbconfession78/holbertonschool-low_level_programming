#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t
 * linked list, and returns the head node's data (n)
 * @head: head to delete
 * Return: data of deleted head; 0 if empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int result = 0;

	if (!*head)
		return (0);
	temp_node = *head;
	*head = temp_node->next;
	result = temp_node->n;
	free(temp_node);
	return (result);
}
