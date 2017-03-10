#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: location to copy to
 * @src: location to copy from
 * @n: number of bytes to copy
 *
 * Return: memory filled array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < sizeof(dest) && i < sizeof(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

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
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	_memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
