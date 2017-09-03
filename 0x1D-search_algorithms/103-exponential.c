#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * Return: index of target value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = 1;
	int retval;

	if (array == NULL || size < 1)
		return (-1);

	while (array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end * 2;
		if (end > (size - 1))
		{
			end = size - 1;
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	retval = ranged_binary_search(array, size, value, start, end);
	return ((int) retval);
}

/**
 * print_range - prints array values in a specified range
 * @start: index to begin printing at
 * @end: index to end prints at
 * @array: the array to print from
 * Return: void
 */
void print_range(size_t start, size_t end, int *array)
{
	size_t i;

	for (i = start; i < end;  i++)
	{
		printf("%d", array[i]);
		if (i != (end))
			printf(", ");
	}
	printf("%d\n", array[i]);
}

/**
 * ranged_binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * @start: start index of range to search
 * @end: end index of range to search
 * Return: target value
 */
int ranged_binary_search(int *array, size_t size,
						 int value, size_t start, size_t end)
{
	size_t lo, hi, mid;

	if (array == NULL || size < 1)
		return (-1);
	lo = start;
	hi = end;
	while (lo <= hi)
	{
		printf("Searching in array: ");
		print_range(lo, hi, array);
		mid = lo + (hi - lo) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid;
	}
	return (-1);
}
