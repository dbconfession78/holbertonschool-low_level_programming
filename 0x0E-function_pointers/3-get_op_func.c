/**
 * get_op_func - selects function to perform requested math operation
 *
 * @s: operator passed as argument to program
 *
 * Return: pointer to func corresponding to op given as aparm
 */

#include "3-calc.h"
#include <stdio.h>
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
