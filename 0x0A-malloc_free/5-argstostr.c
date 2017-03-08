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
	int i, j, k, len, total_len;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		total_len += len + 1;
	}
	new_str = malloc(sizeof(char) * total_len);
	if (new_str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}
