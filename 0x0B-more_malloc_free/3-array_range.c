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
	int *p, i;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		p = malloc(sizeof(int));
		p[0] = min;
	}
	else
	{
		p = malloc(sizeof(int) * (max - min + 1));
		if (p == NULL)
			return (NULL);
		for (i = 0; min <= max; i++, min++)
			p[i] = min;
	}
	return (p);
}
