#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: location to copy to
 * @src: location to copy from
 * @n: number of bytes to copy
 *
 * Return: memory filled array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	 int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
