#include "lists.h"
/**
 *free_dlistint - frees a doubly linked list
 * @head: pointer to first node of doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if(!head)
		return;
	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
