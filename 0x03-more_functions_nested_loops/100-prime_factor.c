#include <stdio.h>

/**
* main - entry point
*
*Return: always 0
*/


int main(void)
{
	long i;
	long n;

	i = 2;
	n = 612852475143;

	while (n != 1)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", i);

	return (0);
}
