#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes the first letter of every word.
 *
 * @s: string to change
 *
 * Return: altered string
 */

char *cap_string(char *s)
{
	
	/*int i;

	printf("%c\n", s[0]);
	s[0] = char_to_upper(s[0]);

	for (i = 1; i < _strlen(s); i++)
	{
		while (is_letter(s[i]) != 1)
		{
			i++;
		}

		if (s[i] == _strlen(s))
		{
			break;
		}

		if (is_word_start(s[i], s[i - 1]) == 1)
		{
			s[i] = char_to_upper(s[i]);
		}
		} */

	int i = 0, j, k;
	char spacers[] = " \t\n,;.!?\"(){}";

	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i++] - 'a' + 'A';
	for (j = 0; seperator[j] != '\0'; j++)
		for (k = i; c[k] != '\0'; k++)
			if (c[k] == seperator[j])
				if (c[k + 1] >= 'a' && c[k + 1] <= 'z')
					c[k + 1] = c[k + 1] - 'a' + 'A';

	return (s);
}
/* space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and } */

/**
 * is_letter - checks if char is alpha
 *
 * @c: character to check
 *
 * Return: 1 if is alpha; 0 if not
 */

int is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}

/**
 * char_to_upper - if char is a lowercase letter, converts to upper
 *
 * @c: character to check
 *
 * Return: if letter, returns upper; otherwise returns same char
 */

char char_to_upper(char c)
{
	int range = 'a' - 'A';

	if (c >= 'a' && c <= 'z')
		c -= range;
	return (c);
}

/**
 * is_word_start - checks index for beginning of word
 *
 * @c: character to check
 * @cp: previous character
 *
 * Return: 1 if is word start; 0 if not
 */

int is_word_start(char c, char cp)
{
	if (is_letter(c) && is_spacer(cp))
		return (1);
	return (0);
}

/**
 * is_spacer - checks for space designated chars
 *
 * @c: character to check
 *
 * Return: 1 if is space char; 0 if not
 */

int is_spacer(char c)
{
	if (c == '\t' || c == '\n' || c == ' ' || c == ','
		|| c == ';' || c == '.' || c == '!' || c == '?'
		|| c == '\"' || c == '(' || c == ')' || c == '{'
		|| c == '}')
		return (1);
	return (0);
}
