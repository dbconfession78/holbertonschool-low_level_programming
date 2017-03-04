#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 *
 *@c: character that is tested for lowercase
 *
 * Return: 1 if character is lowercase; 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
