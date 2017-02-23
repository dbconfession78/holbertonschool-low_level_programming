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
	char temp1, temp2;

	while (*dest) /* same as: while (dest[0] !- '\0') */
	{
		dest++; /* w. each loop, array is shifted left until it's empty */
	}

	while (n != 0)
	{
		temp1 = *src;
		src += 1;
		temp2 = (*dest = temp1);
		dest += 1;
		if (!temp2)
			return (ret);

		n--;
	}
	*dest = 0;

	return (ret);
}
