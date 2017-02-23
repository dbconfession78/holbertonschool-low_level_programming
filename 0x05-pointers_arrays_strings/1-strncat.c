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
	char *ret = dest;

	while (*dest)
		dest++;
	while (n--)
		if (!(*dest++ = *src++))
			return ret;
	*dest = 0;
	return (ret);
}
