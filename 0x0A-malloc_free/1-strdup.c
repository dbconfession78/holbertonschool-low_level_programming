#include <stdlib.h>
#include "holberton.h"
#include <string.h>


/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}

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

	int len = _strlen(str) + 1;
	char *p_str;

	if (str == NULL)
		return (NULL);

	p_str = malloc(len * sizeof(char));

	strcpy(p_str, str);

	return (p_str);
}
