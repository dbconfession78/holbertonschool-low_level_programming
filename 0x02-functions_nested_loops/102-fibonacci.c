#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return (0)
 */

int main(void)
{
	int a, b, c, i;

	a = 1;
	b = 2;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i != 50)
		{
			printf(", ");
		}

		a = c;
	}
	printf("\n");

	return (0);
}
