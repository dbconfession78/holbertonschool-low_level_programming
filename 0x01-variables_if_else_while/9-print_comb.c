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

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			};
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
