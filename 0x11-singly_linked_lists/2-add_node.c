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
 * add_node - adds a new node at beginning of a list_t list.
 * @head: pointer to first node in list
 * @str: value of added node
 * Return: address of added list element; NULL if failed.
 */

/* str needs to be duplicated */
/* can use strdup */
/* return NULL if failed */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;

	return (*head);

}
