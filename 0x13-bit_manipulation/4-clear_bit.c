#include "holberton.h"
/**
 * clear_bit - clears bit ta specified index
 * @n: number to clear bit from
 * @index: position to clear bit at
 * Return: 1 if successfull; -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 11))
		return (-1);
	return ((*n &= ~(1 << index)) ? 1 : -1);
}
