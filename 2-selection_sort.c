#include "sort.h"

/**
 * swap - function that make the swap of elements
 * @xp: first element
 * @yp: second element
 *
 * Return: void.
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
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
			{
				min_idx = j;
				i++;
				/* swap the minimum element with the first element */
				if (min_idx != i)
				{
					swap(&array[min_idx], &array[i]);
					print_array(array, size);
				}
			}
		}
	}
}

