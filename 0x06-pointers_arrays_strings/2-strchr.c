#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurance of c in s; NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}

	return (&s[i]);
}
