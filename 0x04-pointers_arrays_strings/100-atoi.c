#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 *
 *@s: string to convert to int
 *
 * Return: string as an int
 */

int _atoi(char *s)
{
	int i, j, len, d, mult10, multiplier;
	char x[_strlen(s)];

	d = j = 0;
	multiplier = check_sign(s);
	len = _strlen(s);
	x[len] = '\0';
	if (s[0] == 0)
		return (0);
	/* copy numeric chars into new strings */
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			x[j] = s[i];
			j++;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	x[j] = '\0';
	mult10 = 1;
	for (i = 1; i < _strlen(x); i++)
	{
		mult10 *= 10;
	}
	/* convert the string to int */
	for (i = 0; i < len; i++)
	{
		d = d + ((int) x[i] - 48) * mult10;
		mult10 /= 10;
	}
	/* set sign */
	d *= multiplier;
	return (d);
}
