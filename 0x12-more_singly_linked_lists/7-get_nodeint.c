#include "lists.h"

/**
 * get_nodeint_ar_index -  returns the nth node of a listint_t linked list
 * @head: list to return node from
 * @index: index of node to return
 * Return: node at specific index; NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
