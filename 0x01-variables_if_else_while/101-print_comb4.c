#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int c1;
	int c2;
	int c3;
	int d1;
	int d2;
	int d3;
	int i;
	int j;
	int k;

	d2 = 1;
	d3 = 2;

	c2 = d2;
	c3 = d3;

	i = 0;
	j = c2;
	k = c3;

	while (i < 10)
	{
		while (j < 10)
		{
			while(k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			k = c3+1;
			c3 = k;
			j++;
		}
		i++;
		d2++;
		d3++;
		c2 = d2;
		c3 = d3;
		j = c2;
		k = d3;
	}
	putchar('\n');
	return (0);
}
