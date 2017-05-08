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
	dlistint_t *walk;
	dlistint_t *newnode;
	dlistint_t  *temp;
	unsigned int i;

	if (h == NULL && idx != 0)
		return (NULL);
	walk = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		if (walk != NULL)
		{
			newnode->next = walk;
			walk->prev = newnode;
		}
		else
			newnode->next = NULL;
		newnode->prev = NULL; *h = newnode;
		return (*h);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (walk == NULL)
			free(newnode); return (NULL);
		walk = walk->next;
	}
	if (walk == NULL)
	{
		free(newnode); return (NULL);
	}
	temp = walk;
	walk = walk->next;
	temp->next = newnode;
	newnode->next = walk;
	newnode->prev = temp;
	return (newnode);
}
