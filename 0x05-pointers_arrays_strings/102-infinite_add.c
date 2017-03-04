#include <stdio.h>

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer used to store result
 * @size_r: buffer size
 *
 * Return: result of addition
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; n1[len1] != '\0'; i++)
		len1++;
	for (i = 0; n2[len2] != '\0'; i++)
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	   

	return (r);
}

int main(void) {
	char *n1 = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *n2 = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];

	infinite_add(n1, n2, r, 100);

	return (0);
}
