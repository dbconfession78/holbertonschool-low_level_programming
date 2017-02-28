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
	int i = 1;

	while (a[0][j - 1] != 0)
	{
		_putchar(a[0][i - 1]);
		if (i > 1 && i % 8 == 0)
			_putchar('\n');
		i++;
	}

}
