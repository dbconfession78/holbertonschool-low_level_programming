#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <limits.h>


/**
 * create_array - creates a char array and inits it with a specific char.
 *
 * @size: size of array
 * @c: size to initialize array with.
 *
 * Return: char array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
