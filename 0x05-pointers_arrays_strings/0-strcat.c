#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
	int i, j = 0, len;

	len = (_strlen(dest)) + (_strlen(src));
	for (i = _strlen(dest)-1; i < len; i++)
		dest[i] = src[j++];

	dest[i] = '\0';
	return (dest);
}
