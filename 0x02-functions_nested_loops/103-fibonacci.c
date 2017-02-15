#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return (0)
 */

int main(void)
{
	unsigned long i;
	unsigned long a, b, c;
	int sum;

	a = 1;
	b = 2;
	sum = 2;

	for (i = 3; c <= 4000000; i++)
	{
		c = a + b;
		if (c > 4000000)
		{
			break;
		}

		if (c % 2 == 0)
		{
			sum = sum + c;
		}

		a = b;
		b = c;
	}
	printf("%d\n", sum);

	return (0);
}
