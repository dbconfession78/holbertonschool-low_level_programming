#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to first node of doubly linked list
 * @idx: index of the list where new node should be added starting with 0
 * @n: value of node's int element
 * Return: address of new node. NULL if failed or not possible to add new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	temp = *h;
	if (temp == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL; new->next = temp;
		temp->prev = new; *h = new;
		return (new);
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		temp->next = new; temp = temp->next;
		new->prev = temp; new->next = NULL;

	}
	else
	{
		new->prev = temp; new->next = temp->next;
		new->next->prev = new; temp->next = new;
	}
	return (new);
}
