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

	c = 'z';
	i = 0;

	while (i < 26)
	{
		putchar(c);
		c--;
		i++;
	}
	putchar('\n');
	return (0);
}
