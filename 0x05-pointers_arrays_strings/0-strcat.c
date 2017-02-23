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
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
