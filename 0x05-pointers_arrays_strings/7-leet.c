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
	int i, j;;
	char alpha[11] = "aeotlAEOTL";
	char nums[11] = "4307143071";

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = nums[j];
				break;
			}
		}
	}
	s[i] = '\0';

	return (s);
}
