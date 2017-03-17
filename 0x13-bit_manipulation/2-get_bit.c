#include "holberton.h"
/**
 * get_bit - fetches value of bit at a given index
 * @n: number to fetch bit from
 * @index: position to get bit from
 * Return: retrieved bit; -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index > (sizeof(n) * 8 - 1) ? -1 : (int) (n >> index) & 1);
}
