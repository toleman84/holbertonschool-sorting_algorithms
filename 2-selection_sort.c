#include "sort.h"

/**
 * selection_sort - Short description
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: void.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	/* one by one of unsorted sub-array */
	for (i = 0; i < size - 1; i++)
	{
		/* find minimum element in unsorted array */
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;

			/* swap the minimum element with the first element */
			if (min_idx != i)
			{
				_swap(&array[min_idx], &array[i]);
				print_array(array, size);
			}
		}
	}
}

