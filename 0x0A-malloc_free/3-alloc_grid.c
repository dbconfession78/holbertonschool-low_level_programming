#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(grid[j]);
			/* free(grid); */
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}

	return (grid);
}
