#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: return substrings that contain chars from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag;

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
		;
	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (s[j] == accept[i])
				if (j <= pos)
				{
					flag = 1; pos = j;
				}
	if (flag == 1)
		return (&s[pos]);
	else
		return (NULL);
	return (s);
}
