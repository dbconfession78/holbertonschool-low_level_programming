#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, position, swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i <= size - 1; i++)
	{
		position = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[position] > array[j])
				position = j;
		}
		if (position != i)
		{
			print_array(array, size);
			swap = array[i];
			array[i] = array[position];
			array[position] = swap;
		}
	}
}
