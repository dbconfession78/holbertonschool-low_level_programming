#include <stdio.h>
#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to power y
 *
 * @x: base number
 * @y: power
 *
 * Return: result of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y > 0)
		return (x * _pow_recursion(x, --y));
	else
		return (1);
}
