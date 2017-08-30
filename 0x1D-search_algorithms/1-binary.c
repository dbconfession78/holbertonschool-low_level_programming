#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target value
 * Return: target value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lo, hi, mid;

	if (array == NULL || size < 1)
		return (-1);
	lo = 0;
	hi = size - 1;
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
