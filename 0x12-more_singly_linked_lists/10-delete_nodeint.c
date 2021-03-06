#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at a given  index
 * @head: list to delete node from
 * @index: index to delete node at; index starts at 0
 * Return: 1 if succesful; -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *this;
	listint_t *temp_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	this = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(this);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		this = this->next;
		if (!this)
			return (-1);

	}
	temp_node = this->next;
	this->next = temp_node->next;
	free(temp_node);
	return (1);
}
