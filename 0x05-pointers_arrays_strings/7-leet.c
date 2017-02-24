#include "holberton.h"

/**
 * leet - encrypts a string with leet
 *
 * @s: string to encrypt
 *
 * Return: encrypted string
 */

char *leet(char *s)
{
	int i, j;
	char alpha[] = "aeotlAEOTL";
	char nums[] = "4307143071";

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = nums[j];
				break;
			}
		}
	}

	return (s);
}
