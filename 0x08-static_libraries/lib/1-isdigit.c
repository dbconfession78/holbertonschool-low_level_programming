#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 - 9)
 *
 * @c: character to check for digit
 *
 * Return: 1 if is digit; 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
