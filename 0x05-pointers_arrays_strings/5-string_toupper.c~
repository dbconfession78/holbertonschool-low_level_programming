#include "holberton.h"
#include <stdio.h>

/**
 *  reverse_array - reverses the content of an array of integers
 *
 * @a: array to reverse
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp, end;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		end = a[n - 1 - i];
		a[i] = end;
		a[n - 1 - i] = temp;
	}
}
