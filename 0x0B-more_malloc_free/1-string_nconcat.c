#include <stdio.h> /* remove before commiting */
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
 * string_nconcat - concatenates two strings
 *
 * @s1: string to append to
 * @s2: string to append from
 * @n:  first number of s2 bytes to append from
 * Return: pointer to mem. loc. of new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *s3;
	unsigned int tot_len;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; i < n; i++)
		len2++;

	if (n >= len2)
		n = len2;

	if (len1 == 0 && n == 0)
		return (NULL);

	tot_len = len1 + n + 1;
	s3 = malloc(sizeof(char) + tot_len);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		s3[i] = s2[j];

	s3[i] = '\0';

	return (s3);

}
