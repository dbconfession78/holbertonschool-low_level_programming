#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 *
 * @a: number of rows and columns
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int size = sizeof(a);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(a[i][j]);
		}
		printf("\n");
	}
}
