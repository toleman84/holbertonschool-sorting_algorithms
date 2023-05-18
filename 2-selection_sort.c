#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
 *
 * @array: The array to be sort
 * @size: Number of elements in array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, aux, min_idx;

    for (i = 0; i < size; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size - i; j++)
        {
            if (array[j] < array[j - 1])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            aux = array[i];
			array[i] = array[min_idx];
			array[min_idx] = aux;
        }
        print_array(array, size);
    }
}
