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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
				s[i] = nums[j];
		}
	}

	return (s);
}
