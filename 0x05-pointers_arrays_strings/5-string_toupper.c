#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @s: string to change
 *
 * Return: altered string
 */

char *string_toupper(char *s)
{
	int i, range = 'a' - 'A';

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= range;
	return (s);
}
