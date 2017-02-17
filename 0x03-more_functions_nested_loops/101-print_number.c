#include "holberton.h"
#include <stdio.h>

/**
 * print_number - prints integers
 *
 *@n: the number to print
 *
 *Return: void
 */

void print_number(int n)
{
	int x, i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	for ( ; i * 10 <= n; i = i * 10)
	{
		if (i ==  1000000000)
		{
			break;
		}
	}

	for ( ; i > 1 ; i = i / 10)
	{
		x = n / i;
		_putchar(x + '0');
		n = n - x * i;
	}
	_putchar(n + '0');
}
