#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: list to print
 * @n: value of lists int element
 * Return: adress of added node; NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		temp_node = *head;
		while (temp_node->next)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	return (new_node);
}
