#include <stdio.h>
#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 *@s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
		
	}
}
