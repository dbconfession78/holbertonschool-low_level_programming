#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add element to
 * @key: key of element to add
 * @value: value associated with the key
 * Return: 1 on success; 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp;
	unsigned long int index;

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
		return (0);
	/* hash the index */
	index = key_index((const unsigned char *)key, ht->size);
	/* if that index exists, set a pointer to it */
	temp = ht->array[index];
	if (ht->array[index])
	{
		/* then move through the linked list */
		while (temp != NULL)
		{
			/* if the key is found , replace it's value */
			if (strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	if (node->value == NULL || node->key == NULL)
	{
		if (node->key != NULL)
			free(node->key);
		free(node);
		return (0);
	}
	node->next = node;
	ht->array[index] = node;
	return (1);
}
