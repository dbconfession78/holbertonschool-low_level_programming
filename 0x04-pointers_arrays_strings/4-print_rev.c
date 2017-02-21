#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 *@s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) != 0)
		{
			i++;
		}
	}
	for (i-- ; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
