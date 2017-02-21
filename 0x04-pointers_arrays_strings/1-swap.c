#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 *@a: first int
 *@b: second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;

}
