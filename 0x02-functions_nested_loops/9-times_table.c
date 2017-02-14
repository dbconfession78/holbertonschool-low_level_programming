#include "holberton.h"

/**
 * times_table - ouputs multiples of 9 up to 81.
 */

void times_table(void)
{
	int i;
	int result;

	_putchar('0');
	for (i = 1; i <= 9 ; i++)
	{
		result = i * 9;
		_putchar(',');
		_putchar(' ');
		if (result < 10)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
	}
	_putchar('\n');
}
