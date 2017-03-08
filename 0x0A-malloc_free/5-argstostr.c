#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
	char *result, *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; j < _strlen(av[i]); j++)
			tot_len++;
	result = malloc((tot_len + 1) + sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		for (j = 0; j < _strlen(av[i]); j++, k++)
			result[k] = str[j];
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}
