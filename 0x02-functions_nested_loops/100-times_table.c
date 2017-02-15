#include "holberton.h"
/**
 * print_times_table - prints variable times table
 * @n: multiplication factor for table
 *
 * Return: none
*/
void print_times_table(int n)
{
	if (n < 16 && n > -1)
	{
		int i, j, result, m1, m2, m3;

		i = 0;
		while (i <= n)
		{
			_putchar('0');
			j = 0;
			while (j <= n)
			{
				result = i * j;
				m1 = result / 100, m2 = result / 10 % 10, m3 = result % 10;
				_putchar(',');
				_putchar(' ');
				if (result > 99)
				{
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar(m3 + '0');
				}
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m3 +  '0');
				}
				else
				{
					_putchar(' ');
					_putchar(m2 + '0');
					_putchar(m3 + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
