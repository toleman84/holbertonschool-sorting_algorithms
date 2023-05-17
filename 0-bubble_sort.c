#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order using the Bubble sort
 *
 * @array: The array to be sort
 * @size: Number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, aux;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;

				/*print the array after each time you swap*/
				print_array(array, size);
			}
		}
	}
}
