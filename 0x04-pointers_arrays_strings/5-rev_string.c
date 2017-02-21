#include "holberton.h"
#include <stdio.h> /* remove when finished */

/**
 * rev_string - prints a string forwrd and backward
 *
 *@s: string to print
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, len;
	char s2[sizeof(s) + 1];

	i = j = len = 0;

	/* make a copy and get length*/
	for (i = 0; s[i] != 0; i++)
	{
		s2[i] = s[i];
		len++;
	}





	for (i = len - 1; i >= 0; i--)
	{
		s[i] = s2[j];
		j++;
	}
}
