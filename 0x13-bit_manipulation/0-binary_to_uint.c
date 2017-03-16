#include <string.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: binary string to convert
 * Return: result of conversion to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int digit;
	unsigned int bin;
	unsigned int result;
	unsigned int pow;
	unsigned int i = 0;
	unsigned int sum = 0;

	len = strlen(b);

	/* check if b is NULL or any char is not 0 or 1 */
	for (i = 1; i < len; i++)
	{
		if (!b || (b[i] != '1' && b[i] != '0'))
		{
			return (0);
		}
	}
	i = 0;
	bin = atoi(b);
	sum = bin % 10;
	bin = bin / 10;
	while (i < len)
	{
		digit = bin % 10;
		result = 1;
		if (digit == 1)
		{
			pow = i + 1;
			while (pow > 0)
			{
				result = result * 2;
				pow--;
			}
			sum = sum + result;
		}
		bin = bin / 10;
		i++;
	}
	return (sum);
}
