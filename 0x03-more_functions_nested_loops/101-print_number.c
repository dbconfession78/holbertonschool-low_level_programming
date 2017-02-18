#include "holberton.h"

/**
 * print_number - prints integers
 *
 *@n: the number to print
 *
 *Return: void
 */

void print_number(int n)
{
	int c, i, x, mult10;

	mult10 = 10;
	c = 0;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;
	if (n < 10)
	{
		_putchar(n + '0');
		return;
	}

	for  ( ; x > 0; c++)
	{
		x /= 10;
	}

	for (i = 1; i < c - 1; i++)
	{
		mult10 *= 10;
	}

	_putchar((n / mult10) + '0'); /* first digit */
	for (i = 1; i < c; i++)
	{
		mult10 /= 10;
		x = n / mult10;
		_putchar((x % 10) + '0');
	}
}
