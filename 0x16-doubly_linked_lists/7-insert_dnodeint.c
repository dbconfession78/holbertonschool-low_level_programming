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
	dlistint_t *new;

	new =  malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h; /* TEST LINE */
	if (temp == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		temp->prev = new;
		*h = new;
		return (&*new);
	}
	while (idx > 1 && temp->next)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		idx--;
	}
	new->prev = temp;
	new->next = temp->next ? temp->next : NULL; /* TEST LINE */
	if (temp->next)
		temp->next->prev = new;
	temp->next = temp->next && idx > 1 ? NULL : new; /* TEST */
	return (NULL);
}
