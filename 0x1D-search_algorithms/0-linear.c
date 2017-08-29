#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 *                 Linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * Return: the target value
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		getchar();
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
