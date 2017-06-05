#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add element to
 * @key: key of element to add
 * @value: value associated with the key
 * Return: 1 on success 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp, *head;
	unsigned long int index;

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
		return (0);
	/* hash the index */
	index = key_index((unsigned char *)key, ht->size);
	head = temp = ht->array[index];
	if (head)
	{
		/* then move through the linked list */
		while (temp != NULL)
		{
			/* if the key is found , replace it's value */
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		if (node->key)
			free(node->key);
		free(node);
		return (0);
	}
	node->next = head;
	ht->array[index] = node;
	return (1);
}
