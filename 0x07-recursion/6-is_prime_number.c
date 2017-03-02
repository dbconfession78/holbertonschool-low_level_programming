#include <stdio.h>
#include "holberton.h"

/**
 * is_prime_number - checks if integer is prime
 *
 * @n: number to check for prime
 *
 * Return: 1 if prime; 0 otherwise
 */

int is_prime_number(int n)
{
	return  (my_is_prime_number(n, 2));

}

/**
 * my_is_prime_number - helper that checks if number is prime
 * @n: number to check for prime
 * @i: iterator
 *
 * Return: 1 if prime; 0 otherwise
 */

int my_is_prime_number(int n, int i)
{
	if (n == 1 || n < 0)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (my_is_prime_number(n, i + 1));
}
