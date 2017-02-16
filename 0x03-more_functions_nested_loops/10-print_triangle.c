#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: length of each side
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');

			}
			for (k = i + j; k >= 1; k--)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
