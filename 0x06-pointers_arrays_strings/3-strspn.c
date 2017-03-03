#include "holberton.h"


/**
 * _strspn - get length of a substring
 *
 * @s: string to search
 * @accept: character set to search for
 *
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
