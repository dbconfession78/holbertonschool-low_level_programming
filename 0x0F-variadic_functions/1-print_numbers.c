#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers input as strings
 *
 * @separator: string printed between each number
 * @n: number of integers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
