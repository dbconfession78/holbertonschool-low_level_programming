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
	char *pstr;
	unsigned int i = 0;

	while (str[i] != 0)
		i++;
	pstr = malloc(sizeof(char) * i);
	for (i = 0; str[i] != 0; i++)
		pstr[i] = str[i];
	pstr[i] = 0;
	return (i == 0 ? 0 : pstr);
}
