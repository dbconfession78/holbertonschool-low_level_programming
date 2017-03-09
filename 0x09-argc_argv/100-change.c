#include <stdio.h>
<<<<<<< HEAD

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: arguments passed to program
 *
 * Return: always returns 0
=======
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point;
 *
 * @argc: number of arguments
 * @argv: arguments passted to program through main
 *
 * Return:always returns 0
>>>>>>> ce509d5d5884a9e5bbe3ceb078cc2ae656cdf5da
 */

int main(int argc, char *argv[])
{
<<<<<<< HEAD
	return (0);
}
=======
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		printf("%d\n", make_change(atoi(argv[1])));
	}

	return (0);
}

/**
 * make_change - prints minimum number of coins to make change
 *
 * @cents: number of cents to check minimum coins
 *
 * Return: number of coins required to make change
 */

int make_change(int cents)
{

	int q, d, n, tcp, p = cents;

	 q = d = n = tcp = 0;
	if (p >= 25)
	{
		q = p / 25;
		p = p % 25;
	}
	if (p >= 10)
	{
		d = p / 10;
		p = p % 10;
	}
	if (p >= 5)
	{
		n = p / 5;
		p = p % 5;
	}
	if (p >= 2)
	{
		tcp = p / 2;
		p = p % 2;
	}
	return (q + d + n + tcp + p);
}
>>>>>>> ce509d5d5884a9e5bbe3ceb078cc2ae656cdf5da
