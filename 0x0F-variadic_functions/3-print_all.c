#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: string where each char represents a data type
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int printed, i = 0;
	char *str;

	va_start(list, format);
	while (!format)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
		printed = 1;
		switch (format[i])
		{
		case 's':
			str = va_arg(list, char*);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'f':
			printf("%g", va_arg(list, double));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		default:
			printed = 0;
			break;
		}
		if (format[i + 1] && printed == 1)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
