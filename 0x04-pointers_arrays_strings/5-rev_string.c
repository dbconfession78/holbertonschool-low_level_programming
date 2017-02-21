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
	int i, j, c;
	char s2[1000];

	c = i = j = 0;

	while (s[i] != 0)
	{
		c++;
		i++;
	}

	for (i = 0; i < c; i++)
	{
		s2[i] = s[i];
	}

	for (i = c - 1; i >= 0; i--)
	{
		s[i] = s2[j];
		j++;
	}

}
