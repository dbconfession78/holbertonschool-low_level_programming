#include "holberton.h"

/**
 *  print_number - prints an integer
 *
 * @n: integer to print
 *
 * Return: void
 */


void print_number(int n)
{
	int i, x, len, mult10,  last;

	mult10 = 1;
	len = last = 0;
	if (n < 0)
	{
		if (n < -2147483647)
		{
			last = (n % 10) * -1;
			n /= 10;
		}
		_putchar('-');
		n *= -1;
	}
	x = n;
	while (x != 0)
	{
		x /= 10;
		if (x != 0)
			mult10 *= 10;
		len++;
	}
	x = n / mult10;
	_putchar(x + '0');
	for (i = 1; i < len; i++)
	{
		mult10 /= 10;
		x = n / mult10;
		_putchar((x % 10) + '0');
	}
	if (last != 0)
		_putchar(last + '0');
}
