#include "holberton.h"

/**
 * times_table - ouputs multiples of 9 up to 81.
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9 ; j++)
		{
			result = j * i;
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
}
