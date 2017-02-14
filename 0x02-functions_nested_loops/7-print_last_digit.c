#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 *@i: the number to truncate
 *
 *
 * Return: the last digit of the parameter
 */

int print_last_digit(int i)
{
	int result;

	result = i % 10;
	if (result < 0)
	{
		result = result * -1;
	}
	_putchar(result + '0');
	return (result);
}
