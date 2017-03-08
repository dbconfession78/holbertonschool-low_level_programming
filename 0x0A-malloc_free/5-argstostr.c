#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: character array to count
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

/**
 * argstostr - concatenates all arguments passed to function
 *
 * @ac: argument count
 * @av: argument vectors
 *
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, tot_len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* get tot len */
	for (i = 0; i < ac; i++)
		tot_len += _strlen(av[i]) + 1;

	result = malloc(sizeof(char) * (tot_len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}
