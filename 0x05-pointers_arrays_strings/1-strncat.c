#include "holberton.h"


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
	int i, j = 0, len;

	n > _strlen(src) ? n = _strlen(src) : n;
	len = (_strlen(dest)) + n;
	for (i = 0; i < len; i++)
	{
		dest[_strlen(dest) + i] = src[j++];
		if (i == len)
		{
			dest[len] = '\0';
			break;
		}
	}

	return (dest);
}
