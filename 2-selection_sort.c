#include "sort.h"

/**
 * selection_sort - sorts an array of integers using the Selection sort
 *
 * @array: The array to be sort
 * @size: Number of elements in array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, aux, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		if (min_idx != i) //if (array[i] > min)
		{
			aux = array[i];
			array[i] = array[min_idx];
			array[min_idx] = aux;
		}
		print_array(array, size);
	}
}
