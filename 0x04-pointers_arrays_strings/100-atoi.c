#include "holberton.h"
#include <stdio.h>


/**
 * _atoi - converts a string to an integer
 *
 *@s: string to convert to int
 *
 * Return: string as an int
 */

int _atoi(char *s)
{
	int result, sign, i, x, num_count, mult10;

	result = 0, i = 0, sign = 0, x = 0, num_count = 0, mult10 = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
			s[i] == '+' ? sign++ : sign--;
		if (s[i] >= 48  && s[i] <= 57)
		{
			x = x + i;
			while (s[i] >= 48 && s[i] <= 57 && s[i] != '\0')
			{
				num_count++; i++;
			}
			break;
		}
		i++;
	}
	if (num_count > 0)
	{
		i = i - 1;
		for (num_count = num_count - 1; num_count > 0; num_count--)
		{
			mult10 *= 10;
		}
		while (x <= i)
		{
			if (sign >= 0)
			{
				result += (s[x] - 48) * mult10;
			}
			else
			{
				result -= (s[x] - 48) * mult10;
			}
			mult10 /= 10; x++;
		}
	}
	return (result);
}
