#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory for an array using malloc
 *
 * @nmemb: rows in arrow
 * @size: cols in array
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *array;

	if (nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; *(array + 1); i++)
		array[i] = 0;

	return (array);

}
