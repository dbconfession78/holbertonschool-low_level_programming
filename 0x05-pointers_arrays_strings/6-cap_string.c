#include "holberton.h"

/**
 * cap_string - capitalizes the first letter of every word.
 *
 * @s: string to change
 *
 * Return: altered string
 */

char *cap_string(char *s)
{
	int i = 0, j, k;
	char spacers[] = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A'; i++;
		for (j = 0; spacers[j] != '\0'; j++)
			for (k = i; s[k] != '\0'; k++)
				if (s[k] == spacers[j])
					if (s[k + 1] >= 'a' && s[k + 1] <= 'z')
						s[k + 1] = s[k + 1] - 'a' + 'A';
	return (s);
}
