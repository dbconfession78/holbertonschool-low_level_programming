#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 *@s: character array to count
 *
 * Return: number of characters
 */

int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}

/**
 * add_node_end - adds new node at end of a list_t list.
 * @head: array of linked list_t structures
 * @str: string to add to this node
 * Return: address of added list element; NULL if failed.
 */

/* str needs to be duplicated */
/* can use strdup */
/* return NULL if failed */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp_node;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
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

