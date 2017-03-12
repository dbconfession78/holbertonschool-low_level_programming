#include "holberton.h"

/**
 * _memset - sets designated memory space to a constant char
 *
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 *
 * Return: memory filled array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
