#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point for program that performs simple math
 *
 * @argc: number of arguments passed to program
 * @argv: arguments passed to prgoram
 *
 * Return:0 if succesful, exit 98 if incorrect argument count,
 * exit 99 if incorrect operator supplied
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]); b = atoi(argv[3]);
	if (
		strcmp(argv[2], "+") != 0 &&
		strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 &&
		strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0)) &&
		(b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
