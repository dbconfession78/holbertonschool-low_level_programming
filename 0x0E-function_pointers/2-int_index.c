#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array to search for integer
 * @size: size of array
 * @cmp: pointer to a function used to compare values
 *
 * Return: index of first element ofr which cmp function doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (NULL)
	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
