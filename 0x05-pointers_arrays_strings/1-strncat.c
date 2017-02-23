#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concats two strings
 *
 * @dest: string that src will be appended to
 * @src: string that is appended to dest
 * @n: number of src characters to append to dest
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char end[n + 1];

	for (i = 0; i < n; i++)
		end[i] = src[i];
	end[i] = '\0';
	_strcat(dest, end);
	return (dest);
}

/**
 * _strcat - concatenates two strings together
 *
 * @dest: src gets appended to this
 * @src: gets appended to dest
 *
 * Return: concatenated character array
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
