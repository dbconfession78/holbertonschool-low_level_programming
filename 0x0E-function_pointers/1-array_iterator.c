#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function as parameter on each element of an array
 *
 * @array: array to which each function is passed
 * @size: size of array
 * @action: function passed as param to this function
 *
 * Return - void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if(!array || !action || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
