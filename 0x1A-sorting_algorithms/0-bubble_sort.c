#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array of ints
 * @size: number of elements in array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	if (array && size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
