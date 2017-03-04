#include "holberton.h"

/**
 * _strcmp - compares two strings for equality
 *
 * @s1: first string in comparison
 * @s2: second string in comparison
 *
 * Return: 0 if equal; 1 if not equal
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 && (*s1 == *s2); s1++, s2++)
		;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
