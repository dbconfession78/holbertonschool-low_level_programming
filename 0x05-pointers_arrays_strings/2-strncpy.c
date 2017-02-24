#include "holberton.h"

/**
 * _strncpy - copies a string into an empty character array
 *
 * @dest: empty character array that src is copied into
 * @src: copied into dest
 * @n: number of src characters to copy into dest
 *
 * Return: new copy
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
/*	char *ret = dest;
 *	do {
 *		if (!n--)
 *			return (ret);
 *	} while (*dest++ = *src++);
 *	while (n--)
 *		*dest++ = 0;
 *		return (ret);
*/
}
