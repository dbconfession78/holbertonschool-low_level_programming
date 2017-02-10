#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c2, c3, d2, d3, i, j, k;

	d2 = c3 = j = 1;
	d3 = c3 = k = 2;
	i = 0;
	for (i = 0; i < 10; i++)
	{
		for ( ; j < 10; j++)
		{
			for ( ; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k = c3 + 1;
			c3 = k;
		}
		d2++;
		d3++; c2 = d2;
		c3 = d3; j = c2;
		k = d3;
	}
	putchar('\n');
	return (0);
}
