#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2D array previously createdd by the alloc_grid function
 *
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		/*if (grid[i] != NULL) */
			free(grid[i]);
	free(grid);
}
