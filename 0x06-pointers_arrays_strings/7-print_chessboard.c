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
	/*int i, j;
	int size = sizeof(a);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(a[i][j]);
		}
		printf("\n");
		}*/
	int j = 1;

	while (a[0][j - 1] != 0)
	{
		_putchar(a[0][j - 1]);
		if (j > 1 && j % 8 == 0)
			_putchar('\n');
		j++;
	}

}
