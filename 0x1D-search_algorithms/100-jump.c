#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * Return: index of target value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = 0;
	int retval = -1;
	size_t s_root;


	if (array == NULL || size < 1)
		return (-1);

	s_root = sqrt(size);
	while (array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end + s_root;
		if (end > (size - 1))
		{
			end = (size - 1) + s_root;
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	while (start <= end && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
		{
			retval = start;
			break;
		}
		start++;
	}
	return ((int) retval);
}
