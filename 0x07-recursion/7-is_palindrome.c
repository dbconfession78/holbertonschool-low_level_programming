#include <stdio.h>
#include "holberton.h"

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: string to check for palindrome
 *
 * Return: 1 if palindromee; 0 otherwise
 */

int is_palindrome(char *s)
{
	return (my_is_palindrome(s, _strlen_recursion(s)));
}

/**
 * my_is_palindrome - helper function to check for palindrome
 *
 * @s: string to check for palindrome
 * @len: length of string
 *
 *Return: 1 if palindrome; 0 otherwise
 */

int my_is_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (s[0] == s[len - 1])
	{
		s++; len -= 2;
		return (my_is_palindrome(s, len));
	}
	else
		return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 *
 *@s: string to return length of
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	s++;
	if (s[-1] != '\0')
	{
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
