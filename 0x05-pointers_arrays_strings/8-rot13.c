#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: string to encrypt
 *
 * Return: encrypted rot13 string
 */

char *rot13(char *str)
{
	int i, j;
	char *a1 = "abcdefghijklmABCDEFGHIJKLM";
	char *a2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; str[i] != 0; i++)
		for (j = 0; j <= 25; j++)
		{
			if (str[i] == a1[j])
				str[i] = a2[j];
			else if (str[i] == a2[j])
				str[i] = a1[j];
			else
				str[i] = str[i];
		}
	return (str);
}
