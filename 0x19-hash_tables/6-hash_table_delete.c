#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *row;
	unsigned int col = 0;

	if (ht == NULL)
		return;
	for (col = 0; col < ht->size; col++)
	{
		row = ht->array[col];
		if (row != NULL)
			while (ht->array[col])
			{
				row = ht->array[col];
				free(row->key);
				free(row->value);
				ht->array[col] = ht->array[col]->next;
				free(row);
			}
	}
	free(ht->array);
	free(ht);
}
