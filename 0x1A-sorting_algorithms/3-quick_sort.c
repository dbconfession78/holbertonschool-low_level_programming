#include "sort.h"

/**
 * quick_sort - calls the do_quick_sort functions
 * @array: array to be sorted
 * @size: size of array
 * return: void
 */
void quick_sort(int *array, size_t size)
{
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
	int p;

	if (hi <= lo)
		return;

	p = partition(array, lo, hi, size);
	do_quick_sort(array, lo, p - 1, size);
	do_quick_sort(array, p, hi, size);
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

	i = lo - 1;
	j = hi + 1;
	pivot = array[hi];
	while (1 == 1)
	{
		j--;
		for ( ; array[j] > pivot; j--)
			;
		i++;
		for ( ; array[i] < pivot; i++)
			;
		if (i >= j)
			return (i);

		/* swap and print array */
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
