#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *
 *
 *
 *
 * Return:
 */

int _atoi(char *s)
{
	int i;
	int result;
	int neg_count;

	result = neg_count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			neg_count++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			for ( ; s[i] >= '0' && s[i] <= '9'; i++)
			{
				result = result * 10 - (s[i] - '0');
			}
			break;
		}
	}
	if (neg_count % 2 == 0)
	{
		result *= -1;
	}
	else
	{
		result *= 1;
	}
	return (result);
}
