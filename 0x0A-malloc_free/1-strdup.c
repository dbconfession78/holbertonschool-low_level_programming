#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <limits.h>
#include <string.h>


/**
 * _strdup - returns a pointer to a newly allocated space in mem
 * which contains a copy of string givem as a param
 *
 * @str: string copied into mem location being pointed to
 *
 * Return: pointer to mem location containing copy if string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *str2 = malloc((strlen(str) * sizeof(char)));
	char *p_str2 = &str2[0];

	if (str == NULL)
		return (NULL);

/*	strcpy(str2, str); */
	for (i = 0; i < strlen(str); i++)
	{
		str2[i] = str[i];
	}

	return (p_str2);
}
