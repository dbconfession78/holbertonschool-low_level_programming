#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 *
 *@a: array to print
 *@n: number of elemnts to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
