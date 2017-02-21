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
	int len, c;

	len = 0;
	char s2[sizeof(s) + 1];



	/* make a copy and get length*/
	for (c = 0; s[c] != 0; c++, len++)
	{
		s2[c] = s[c];
	}

	for (c = 0, len = len - 1; len >= 0; len = len - 1, c++)
	{
		s[c] = s2[len];
	}
}
