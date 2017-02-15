#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return (0)
 */

int main(void)
{
	int i;
	unsigned long a, b, c;

	a = 1;
	b = 2;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i != 50)
		{
			printf(", ");
		}

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
