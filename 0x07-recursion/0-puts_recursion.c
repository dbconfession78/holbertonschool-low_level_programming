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

	if (s == "" || s == "\0")
		return;

	if (!*s)
		_putchar('\n');

	else
	{
		_putchar(s[0]);
		*s++;
		_puts_recursion(s);
	}

}
