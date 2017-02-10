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
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}
