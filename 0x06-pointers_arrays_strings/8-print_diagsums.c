#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * integers
 *
 *@a: square matrix to sum diagonals from
 *@size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0, j = 0;  i < size; i++, j += size)
	{
		sum1 = sum1 + a[j + i];
	}
	for (i = 0, j = (size - 1); i < size; i++, j += (size - 2))
	{
		sum2 += a[i + j];
	}
	printf("%d, %d\n", sum1, sum2);
}
