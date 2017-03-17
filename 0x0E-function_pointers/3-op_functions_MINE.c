#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers together
 *
 * @a: first number to add
 * @b: second number to add
 *
 * Return: sum  of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: number to subtract from
 * @b: number to subtract
 *
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipies two integers
 *
 * @a: first factor
 * @b: second factor
 *
 * Return: product of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number anothers
 *
 * @a: number being divided
 * @b: number doing the dividing
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of one number divided by another
 *
 * @a: number being divided
 * @b: number doing the dividing
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
