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
	int i;
	int range;

	if (min > max)
		return (NULL);

	range = max - min;
	array = malloc(sizeof(int) * range + 1);
	if (!array)
		return (NULL);
	printf("min: %d\nmax: %d\nrange: %d\n", min, max, range);
	for (i = 0; i <= range; i++)
		array[i] = min++;

	return (array);

}
