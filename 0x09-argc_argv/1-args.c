#include <stdio.h>
#include "holberton.h"

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
	(void) argv;
	printf("%d\n", argc-1);
	return (0);
}
