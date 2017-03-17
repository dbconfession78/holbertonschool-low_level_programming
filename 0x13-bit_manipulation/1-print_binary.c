#include "holberton.h"
/**
 * print_binary - prints long int as a binary
 * @n: long int to print
 *
 */
void print_binary(unsigned long int n)
{
	int i, bit_on, should_put_char = 0;

	if (n == 0)
		_putchar('0');
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		bit_on = (n >> i) & 1;
		if (bit_on)
			should_put_char = 1;
		if (should_put_char)
			_putchar(bit_on ? '1' : '0');
	}
}
