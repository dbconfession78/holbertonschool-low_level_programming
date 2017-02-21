#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 *@str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;

	i = len = 0;
	while (str[i] != 0)
	{
		if (str[i] != 0)
		{
			len++;
			i++;
		}
	}
	if (len % 2 != 0)
	{
		i = len - ((len - 1) / 2);
	}
	else
	{
		i = len / 2;
	}
	for ( ; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
