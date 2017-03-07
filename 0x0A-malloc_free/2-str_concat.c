#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: string to be appended to
 * @s2: string to be appended to end of other string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s3;
	int s3_len = ((_strlen(s1)) + (_strlen(s2)));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s3 = malloc((s3_len + 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++, i++)
		s3[i] = s2[j];

	if (s3 == NULL)
		return (NULL);

	return (s3);
}
