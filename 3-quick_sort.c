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
 * partition - Short description
 * @array: first member
 * @low: second member
 * @high: third member
 * @size: fourth member
 *
 * Return: i + 1
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int j, i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	if (i != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quickSort - Short description
 * @array: first member
 * @low: second member
 * @high: third member
 * @size: fourth member
 *
 * Return: void
 */
void quickSort(int *array, int low, int high, int size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);

		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sort an array
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
}

