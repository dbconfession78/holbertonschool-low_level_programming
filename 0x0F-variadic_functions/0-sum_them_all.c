#include <stdarg.h>

/**
 * sum_them_all - takes any number of integeres and adds them
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
