#include "holberton.h"
/**
 *print_times_table - prints variable times table
 *@n: multiplication factor for table
 *
 * Return: none
*/
void print_times_table(int n)
{
	int i, j, result, m1, m2, m3;

	if (n < 16 && n > -1)
	{

		for (i = 0; i <= n ; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				m1 = result / 100;
				m2 = result / 10 % 10;
				m3 = result % 10;

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
			}
			_putchar('\n');
		}
	}
}
