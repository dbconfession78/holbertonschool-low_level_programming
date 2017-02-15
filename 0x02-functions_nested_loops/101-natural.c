#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: always returns (0);
 */

int main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d", i);
			if (i != 1023)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
