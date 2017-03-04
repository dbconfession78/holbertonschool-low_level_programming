#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: arguments passed to program
 *
 * Return: always returns 0
 */

int main(int argc, char *argv[])
{
	int i, j, len, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (j = 0; j < len; j++)
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
