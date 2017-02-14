#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet
 */

void print_alphabet(void)
{
	int i;
	int c;

	c = 'a';

	for (i = 0; i < 26; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
