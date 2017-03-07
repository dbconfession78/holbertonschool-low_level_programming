#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <limits.h>
#include <string.h>


/**
 * _strdup - returns a pointer to a newly allocated space in mem
 * which contains a copy of string gievn as a param
 *
 * @str: string copied into mem location being pointed to
 *
 * Return: pointer to mem location containing copy if string
 */

char *_strdup(char *str)
{

	char *str2 = malloc((strlen(str) * sizeof(char)));
	char *p_str2 = &str2[0];

	strcpy(str2, str);

	return (p_str2);
}
