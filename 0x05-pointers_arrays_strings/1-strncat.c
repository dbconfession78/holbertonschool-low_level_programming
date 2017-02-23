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
	int i = 0, j = 0;

	n > _strlen(src) ? n = _strlen(src) : n;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j != n ; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			break;
	}
	dest[i + n] = '\0';

	return (dest);
}
