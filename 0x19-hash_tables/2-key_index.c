#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key whose index is returned
 * @size: size of the array of the hash table
 * Return: index at which the key/vakue pair
 *         should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
