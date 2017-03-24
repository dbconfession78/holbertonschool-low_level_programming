#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 *@s: character array to count
 *
 * Return: number of characters
 */

int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}
