#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurance of c in s; NULL if not found
 */

char *strchr(const char *s, int c)
{
    while (*s != (char)c)
        if (!*s++)
            return 0;
    return (char *)s;
}
