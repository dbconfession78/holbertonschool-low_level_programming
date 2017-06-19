#include "sort.h"

/**
 * quick_sort - calls the do_quick_sort functions
 * @array: array to be sorted
 * @size: size of array
 * return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	do_quick_sort(array, 0, size - 1, size);
}

/**
 * do_quick_sort - sorts an array of integers in ascending
 *                 order using the Quick sort algorithm
 * @array: array to be sorted
 * @lo: least index
 * @hi: selected piviot
 * @size: size of array
 * return: void
 */
void do_quick_sort(int *array, int lo, int hi, size_t size)
{
	int i;

	if (lo < hi)
	{
		i = partition(array, lo, hi, size);
		do_quick_sort(array, lo, i - 1, size);
		do_quick_sort(array, i + 1, hi, size);
	}
	else
		return;
}

/**
 * partition - separates ints lower and higher than pivot
 * @array: array to partition
 * @lo: least index left of pivot
 * @hi: highest index right of pivot
 * @size: size of array
 * Return: number of swaps performed
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int i, j, pivot, temp;
	int *start_array = malloc(sizeof(int) * size);

	for (i = 0; i < (int) size; i++)
		start_array[i] = array[i];

	j = lo;
	pivot = array[hi];
	for (i = lo; i < hi; i++)
	{
		if (array[i] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			j++;
			if (array_cmp(start_array, array, size) != 0)
				print_array(array, size);
		}
	}

	temp = array[j];
	array[j] = array[hi];
	array[hi] = temp;
	if (array_cmp(start_array, array, size) != 0)
		print_array(array, size);
	free(start_array);
	return (j);
}

/**
 * array_cmp - compares equality between two arrays fo the same size
 * @array_1: first array in comparison
 * @array_2: second array in comparison
 * @size: size of arrays
 * Return: 0 if equal, 1 if not equal
 */
int array_cmp(int array_1[], int array_2[], size_t size)
{
	int i;

	for (i = 0; i < (int) size; i++)
		if (array_1[i] != array_2[i])
			return (1);
	return (0);

}
