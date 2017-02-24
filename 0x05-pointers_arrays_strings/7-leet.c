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
	char alpha[] = "AaEeOoTtLl";
	char nums[] = "4433007711";

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = nums[j];
			}
		}
	}

	return (s);
}
