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
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (&*new);
	}
	if (*h == NULL)
		*h = new;
	else
	{
		temp = *h;
		while (temp && i < idx - 1)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free(new);
				return (NULL);
			}
			i++;
		}
		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
	}
	return (NULL);
}
