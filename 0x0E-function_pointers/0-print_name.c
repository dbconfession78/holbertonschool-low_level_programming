#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to print
 * @f: function passed as param to this function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;

	(*f)(name);
}
