#include <stdio.h>

/**
 *
 *
 *
 *
 * Return:
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < _strlen(dest) && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
