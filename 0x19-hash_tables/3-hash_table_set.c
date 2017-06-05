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
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int hash;

	if (!ht || !key || !value)
		return (0);

	/* create hashed index */
	hash = key_index((unsigned char *) key, ht->size);
	temp = ht->array[hash];

	while(temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[hash];
	ht->array[hash] = node;

	return (1);

}
