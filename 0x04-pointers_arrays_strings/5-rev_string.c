#include "holberton.h"

/**
 * rev_string - prints a string forwrd and backward
 *
 *@s: string to print
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, c;

	char copy[sizeof(s) + 1];



	/* make a copy and get length*/
	for (c = 0; s[c] != 0; c++, len++)
	{
		copy[c] = s[c];
	}

	for (c = 0, len--; len >= 0; len--, c++)
	{
		s[c] = copy[len];
	}
}
