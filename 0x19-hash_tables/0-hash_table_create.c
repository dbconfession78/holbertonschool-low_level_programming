#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hashtable (2D array)
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);


	return (ht);

}
