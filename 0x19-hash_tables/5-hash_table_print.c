#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i;
	unsigned int high_index;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		for (; temp != NULL ; high_index = i, temp = temp->next)
			;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (i != high_index)
				printf(", ");
		}
	}
	printf("}\n");
}
