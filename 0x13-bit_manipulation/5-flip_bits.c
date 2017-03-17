#include "holberton.h"

/**
 * flip_bits - returns number of flipped bits required to convert
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of required flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
