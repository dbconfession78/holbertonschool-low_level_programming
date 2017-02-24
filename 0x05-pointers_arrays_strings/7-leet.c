#include "holberton.h"

/**
 * leet - function that encodes a string into l337
 *
 * @s: string to encrypt
 *
 * Return: l337 encrypted string
 */

char *leet(char *s)
{
	int i = 0, j;
	char nums[] = "4433007711";
	char alpha[] = "AaEeOoTtLl";

	for ( ; s[i] != 0; i++)
	{
		j = 0;
		for (j = 0; alpha[j] != 0; j++)
			if (s[i] == alpha[j])
				s[i] = nums[j];
	}
	return (s);
}
