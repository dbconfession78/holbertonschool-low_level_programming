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

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			temp->next->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	else
	{
		while (temp)
		{
			if (i == index)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				return (1);
			}
			temp = temp->next;
			i++;
		}
	}
	free(temp);
	return (-1);
}
