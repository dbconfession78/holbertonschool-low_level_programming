#include "sort.h"


/**
 * selection_sort - sorts an array of integers in ascending order using the
 *                   selection sort algorithm.
 * @array: array to sort
 * @size: size of array
 * return: void
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min, min_index, should_swap;

	if (array == NULL || size < 2)
		return;

	min = array[0];
	should_swap = 0;
	for (i = 0; i < size; i++)
	{
		min = array[i];
		should_swap = 0;
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				min_index = j;
				should_swap = 1;
			}
		}
		if (should_swap == 1)
		{
			array[min_index] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}

}
