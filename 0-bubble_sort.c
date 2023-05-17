#include "sort.h"

/*
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: 
 * @size: 
 */
void bubble_sort(int *array, size_t size)
{
    // print the array after each time you swap two elements

     size_t i, j, aux;

    for (i = 2; size - 2; i++)
    {
        for (j = 0; size - 1 - 2; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
            print_array(array, size);
        }
    }
}
