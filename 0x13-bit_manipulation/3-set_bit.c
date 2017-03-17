#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set given index of
 * @index: position to set bit at
 * Return: 1 if succesfull; -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	return  ((*n |= 1 << index) ? 1 : -1);
}
