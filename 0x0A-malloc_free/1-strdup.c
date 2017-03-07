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
	int len = strlen(str);
	char *p_str = malloc(len * sizeof(char));

	strcpy(p_str, str);
	p_str[len] = 0;
	if (p_str == NULL)
		return (NULL);

	return (p_str);
}
