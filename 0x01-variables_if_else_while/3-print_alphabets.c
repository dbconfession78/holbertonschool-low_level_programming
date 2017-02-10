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

	c = 'a';
	i = 0;

	while (i < 26)
	{
		putchar(c);
		if (c == 'z')
		{
			i = 0;
			c = 'A';
		} else
		{
			i++;
			c++;
		}

	}
	putchar('\n');

	return (0);
}
