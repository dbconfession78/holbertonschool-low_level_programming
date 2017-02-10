#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;
	int j;
	int c;

	c = 1;

	for (i = 0; i < 10; i++)
	{
		j = c;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
