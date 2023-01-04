#include "sort.h"

/**
 * swap - function that make the swap of elements
 * @array: first element
 * @low: second element
 * @high: third element.
 * @size: fourth element.
 *
 * Return: void.
 */
void swap(int *array, int low, int high, size_t size)
{
	int tmp;

	if (array[low] != array[high])
	{
		tmp = array[low];
		array[low] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
}

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

	if (!array || size < 2)
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
			if (array[min_idx] < array[i])
			{
				swap(array, min_idx, i, size);
				print_array(array, size);
			}
			
		}
	}
}

