#include "hash_tables.h"

/**
 * build_node - creates and populates a hash_node_t struct
 * @key: key value
 * @value: value associated with key
 * Return: populated hash_node_t struct
 */

hash_node_t *build_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(new_node);

		return (NULL);
	}

	return (new_node);
}


/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add element to
 * @key: key of element to add
 * @value: value associated with the key
 * Return: 1 on success; 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp, *head;
	unsigned long int index;

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = temp = ht->array[index];
	if (head)
	{
		while (temp)
		{
			if (!strcmp(temp->key, key))
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	node = build_node(key, value);
	if (!node)
		return (0);
	node->next = head;
	ht->array[index] = node;

	return (1);
}
