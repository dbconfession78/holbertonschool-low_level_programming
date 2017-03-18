#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - prints any number of strings
 *
 * @separator: string printed between each argument string
 * @n: number of strings passed to function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (!string)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
