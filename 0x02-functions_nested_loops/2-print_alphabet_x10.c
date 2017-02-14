#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{

	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		for (j = 0; j < 26; j++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
