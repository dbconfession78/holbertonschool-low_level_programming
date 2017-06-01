#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if succesfull. 0 on fail
 */

/* key cannot be an empty string */
/* value can be an empty string */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node; hash_node_t *temp;
	unsigned long int hash;

	/* check that args aren't NULL and that key isn't empty */
	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* create a hash */
	hash = key_index((unsigned char *) key, ht->size);
	/* check if collision: adding to same index */
	if (ht->array[hash])
	{
		temp = ht->array[hash];
		while (temp && strcmp(temp->key, key) != 0)
			temp = temp->next;
		if (temp && strcmp(temp->key) == 0)
		{
			free(temp->value); temp->value = strdup(value);
			return (1);
		}
	}
	/* set node's key */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	/* set node's value */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key); free(new_node);
		return (0);
	}
	new_node->next = ht->array[hash];
	ht->array[hash] = new_node;
	return (1);
}
