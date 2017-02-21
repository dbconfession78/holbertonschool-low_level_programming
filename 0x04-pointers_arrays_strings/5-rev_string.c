#include "holberton.h"
#include <stdio.h>
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
	char s2[64];


	i = j = len = 0;
	while (s[i] != 0)
	{
		if (s[i] != 0)
		{
			len++;
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

int main(void)
{
	char s[100] = "hghghghghghghghghghghghghghghghghghghghghghghghghghg";
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
