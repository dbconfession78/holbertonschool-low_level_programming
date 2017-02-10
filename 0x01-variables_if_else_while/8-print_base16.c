#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	c = '0';
	i = 0;

	while (i < 16)
	{
		if (i == 10)
		{
			c = 'a';
		}
		putchar(c);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
