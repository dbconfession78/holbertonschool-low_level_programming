#include <string.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: binary string to convert
 * Return: result of conversion to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result;
	unsigned int bin_one = 1;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result << 1;
		if (b[i] == '1')
			result = result ^ bin_one;
	}
	return (result);
}
