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
	hash_node_t *node, *temp, *head;
	unsigned long int index;

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
		return (0);
	/* hash the index */
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	temp = head;
	if (temp)
	{
		/* then move through the linked list */
		while (temp != NULL)
		{
			/* if the key is found , replace it's value */
			if (strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				if (temp->value != NULL)
					return (1);
				return (0);
			}
			temp = temp->next;
		}
	}
	node = build_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

/**
 * build_node - creates and populates a hash_node_t struct
 * @key: key value
 * @value: value associated with key
 * Return: populated hash_node_t struct
 */

hash_node_t *build_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL || value == NULL || strlen(key) <= 0)
		return (NULL);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	return (node);
}
