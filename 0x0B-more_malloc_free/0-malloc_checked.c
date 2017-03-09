#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c)
	{
		return (c);
	}

	exit(98);
}
