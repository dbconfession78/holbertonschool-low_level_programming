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
	size_t i, j;
	int *temp;

	/* hndle NULL array and size requirement */
	if (array == NULL || size < 2)
		return;

	/* for each number, check each pair for high/low */
	for (i=0; i < size; i++)
	{
		temp = NULL;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				if (temp && array[j] < *temp)
					temp = &array[j];
				else if (temp == NULL)
					temp = &array[j];
			}
		}
		if (temp)
		{
			swap(temp, &array[i]);
			print_array(array, size);
		}
	}

}

/**
 * swap - switches the positions of two integers in an array
 * @a: first int
 * @b: second int
 * return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
