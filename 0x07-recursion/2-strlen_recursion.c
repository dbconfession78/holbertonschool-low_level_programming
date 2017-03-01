#include <stdio.h>
#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 *@s: string to return length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	s++;
	if (s[-1] != '\0')
	{
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
