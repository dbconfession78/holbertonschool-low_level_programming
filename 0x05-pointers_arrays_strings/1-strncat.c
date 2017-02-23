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

	while (*dest) /* same as: while (dest[0] !- '\0') */
	{
		dest++; /* w. each loop, array is shifted left until it's empty */
	}

	while (n != 0)
	{
		char temp1 = *src++;
		char temp2 = (*dest++ = temp1);

		if (!temp2)
			return (ret);

/*		if (!(*dest++ = *src++))
 *		return ret;
*/
		n--;
	}
	*dest = 0;

	return (ret);
}
