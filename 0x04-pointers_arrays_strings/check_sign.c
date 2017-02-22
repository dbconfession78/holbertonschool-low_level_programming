#include "holberton.h"

/**
 * _atoi - checks the sign of a number in a char string
 *
 *@str: string to check
 *
 * Return: 1 if positive; -1 if negative;
 */

int check_sign(char *str)
{
	int i, multiplier, len;


	multiplier = 1;
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			break;
		}
		if (str[i] == '-')
		{
			if (multiplier == 1)
			{
				multiplier = -1;
			}
			else
			{
				multiplier = 1;
			}
		}
		else if (str[i] == '+')
		{
			if (multiplier == -1)
			{
				multiplier = -1;
			}
			else
			{
				multiplier = 1;
			}
		}
	}
	return multiplier;
}
