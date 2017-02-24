#include <stdio.h>

/**
 * _strncpy - copies src substring 0-# src range to destinto dest
 *
 * @dest: empty char that src is copied into
 * @src: 0-index ranged string copied into dest
 * @n: src index to copy up to
 *
 * Return: copied string
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < _strlen(dest) && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
