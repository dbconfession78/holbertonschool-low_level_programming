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
	int len = strlen(str);
	char *p_str = malloc(len * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		p_str[i] = str[i];
	}
	p_str[i] = 0;

	if (i == 0)
		return (NULL);

	return (p_str);
}
