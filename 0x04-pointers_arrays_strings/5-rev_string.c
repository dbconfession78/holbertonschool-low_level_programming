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
	int i, j, len;
	char s2[1000];

	i = j = 0;
	len = _strlen(s);
	while (s[i] != 0)
	{
		if (s[i] != 0)
		{

			i++;
		}
	}

	for (i = 0; i < len; i++)
	{
		s2[i] = s[i];
	}

	for (i = len - 1; i >= 0; i--)
	{
		s[i] = s2[j];
		j++;
	}

}
