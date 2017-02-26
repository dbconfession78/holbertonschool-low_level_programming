#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 *
 * @s: string to encrypt
 *
 * Return: encrypted rot13 string
 */

char *rot13(char *s)
{
	int i, j;

	char *cipher1 = "ABCDEFGHIJKLMNOPQRSTUVQXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *cipher2 = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; cipher1[j] != '\0'; j++)
		{
			if (s[i] == cipher1[j])
			{
				s[i] = cipher1[j + 13];
				break;
			}
			else if (s[i] == cipher2[j])
			{
				s[i] = cipher2[j + 13];
				break;
			}
		}
	}

	return (s);
}
