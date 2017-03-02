#include <stdio.h>
#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number to find natural square root of
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 1));
}

/**
 * my_sqrt - checks if square root exists
 *
 * @n: number to check
 * @mult: incrementally squared to match with n
 *
 * Return: square root if found; -1 if not found
 */

int my_sqrt(int n, int mult)
{
	int square = mult * mult;

	if (square > n)
		return (-1);
	if (square != n)
		return (my_sqrt(n, mult + 1));
	else
		return (mult);

}
