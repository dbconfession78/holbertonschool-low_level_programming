#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list to insert node to
 * @idx: index of the list where the new node should be added
 *       Index starts at 0
 * @n: value of node's int element
 * Return: address of new node; NULL if failed or not possible to add node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node;
	unsigned int i;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		(*head = new_node);
	else
	{
		temp_node = *head;
		for (i = 1; i < idx && temp_node->next; i++)
			temp_node = temp_node->next;
		new_node->next = temp_node->next;
		temp_node->next = new_node;
	}
	return (&*new_node);
}
