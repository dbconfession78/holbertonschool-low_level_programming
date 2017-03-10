#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: current pointer
 * @old_size: size of current pointer
 * @new_size: allocation size of new pointer
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);

	return (new_ptr);
}
