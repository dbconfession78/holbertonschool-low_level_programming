#include "holberton.h"
/**
 * clear_bit - clears bit ta specified index
 * @n: number to clear bit from
 * @index: position to clear bit at
 * Return: 1 if successfull; -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	*n &= ~(1 << index);
	return ((index <= sizeof(n) * 8 - 1) ? 1 : -1);
}
