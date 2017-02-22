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

/**
 * _strlen - returns the length of a string
 *
 *@s: character array to count
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int i, c;

	i = 0;
	c = -1;
	while (c != 0)
	{
		c = s[i];
		if (c != 0)
		{
			i++;
		}
	}
	return (i);
}

int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}
