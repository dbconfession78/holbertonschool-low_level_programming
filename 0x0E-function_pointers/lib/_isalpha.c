#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 *
 *@c: character that is tested for alpha
 *
 * Return: 1 if is alpha; 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
