#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: value of first elem in array
 * @max: value of last elem in array
 *
 * Return: int array w. incremental values from min to max
 */

int *array_range(int min, int max)
{
	int *array;
	int i, range;

	if (min > max)
		return (NULL);
	range = max - min;
	if (range == 0)
	{
		array = malloc(sizeof(int));
		*array = min;
	}
	else
	{
		array = malloc(sizeof(int) * (range + 1));
		if (!array)
			return (NULL);
		for (i = 0; i <= max; i++, min++)
			array[i] = min;
	}
	return (array);
}
