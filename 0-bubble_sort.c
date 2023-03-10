#include "sort.h"

/**
 * swap - Short description
 * @xp: first member
 * @yp: second member
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
 * bubble_sort - Short desciption.
 * @array: The array to be printed
 * @size: Number of elements in @array
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

