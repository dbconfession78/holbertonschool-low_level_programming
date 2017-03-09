#include <stdio.h> /* remove before commiting */
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 *@s: character array to count
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int i, c;

	i = 0;
	c = -1;
	while (c != 0)
	{
		c = s[i];
		if (c != 0)
		{
			i++;
		}
	}
	return (i);
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
	unsigned int i, j, tot_len = 0, len1 = 0, len2 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*	for ( ; *(s1 + len1) != '\0'; len1++)
 *		;
 *	for ( ; *(s2 + len2) != '\0'; len2++)
 *	;
*/
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	tot_len = len1 + n + 1;
	s3 = malloc(sizeof(char) * tot_len);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);

}
