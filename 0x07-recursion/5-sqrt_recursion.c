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
 * @i: incrementally squared to match with n
 *
 * Return: square root if found; -1 if not found
 */

int my_sqrt(int n, int i)
{

	if (n <= 0 || i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (my_sqrt(n, i + 1));

}
