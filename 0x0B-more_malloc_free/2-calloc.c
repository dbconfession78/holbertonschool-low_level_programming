#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory for an array using malloc
 *
 * @nmemb: number of elements
 * @size: byte size of each element
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

	for (i = 0; *(array + 1) != '\0'; i++)
		array[i] = 0;

	return (array);

}
