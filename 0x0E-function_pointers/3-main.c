#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - function to return arguments
 * @argc: received argument count
 * @argv: arguments provided at command line
 * Return: void
 */
int main(int argc, char *argv[])
{
	/* int (*fun)(int, int); */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* fun = get_op_func(argv[2]); */

	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0)) &&
		(argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

/*	if (fun == NULL)
 *	{
 *		printf("Error\n");
 *		exit(99);
 *		}/
*/
/*	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3]))); */
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
