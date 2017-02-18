#include "holberton.h"

/**
 * print_number - prints integers
 *
 *@n: the number to print
 *
 *Return: void
 */

/* int range: -2,147,483,648 to 2,147,483,647 */
void print_number(int n)
{
	int c, i, x, mult10, last_digit;

	mult10 = 10;
	c = last_digit = 0;
	if (n < 0)
	{
		if (n < -2147483647)
		{
			last_digit = (n % 10) * -1;
			n /= 10;
		}
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
	if (last_digit != 0)
	{
		_putchar(last_digit + '0');
	}
}
