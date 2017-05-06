#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.t
 * @head: pointer to first node of doubly linked list
 * @index: index of retrived node starting at 0
 * Return: retrieved node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == i)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
