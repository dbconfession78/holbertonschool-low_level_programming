#include "holberton.h"

/**
 * _abs -  computes the absolute value of an integer
 *
 *@i: the int to be made absolute
 *
 * Return: the absolute value of the number
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}

	return (i);

}
