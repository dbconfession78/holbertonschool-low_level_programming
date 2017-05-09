#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at 'index' of a doubly linked list
 * @head: double pointer to first node of doubly linked list
 * @index: index of node that should be deleted starting with 0.
 * Return: 1 on success. -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (i != index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			temp->next->prev = NULL;
		}
		else
		{
			free(temp);
			*head = NULL;
			return (1);
		}
	}
	else
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next = temp->prev;
	free(temp);
	return (1);
}
