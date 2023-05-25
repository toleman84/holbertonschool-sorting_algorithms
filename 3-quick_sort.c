#include "sort.h"

/**
 *swap - swap two numbers
 * @array: array
 * @a: int 1
 * @b: int 2
 * @size: size
 */

void swap(int *array, int a, int b, int size)
{
	int temp;

	if (array[a] != array[b])
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
		print_array(array, size);
	}
}

/**
 * Lomuto - partition function
 * @array: the array of ints
 * @boy: left side of the array
 * @large: right side of the array
 * @size: size
 * Return: a
 */
int Lomuto(int *array, int boy, int large, int size)
{
	int pivot;
	int x, a = boy;

	pivot = array[large];

	for (x = boy; x < large; x++)
	{
		if (array[x] <= pivot)
		{
			swap(array, a, x, size);
			a++;
		}
	}
	swap(array, a, x, size);

	return (a);
}

/**
 *recursion - a function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: the array
 * @boy: left side of the array
 * @large: right side of the array
 * @size: size
 */

void recursion(int array[], int boy, int large, int size)
{
	int pivot_i;

	if (boy < large)
	{
		pivot_i = Lomuto(array, boy, large, size);

		recursion(array, boy, pivot_i - 1, size);
		recursion(array, pivot_i + 1, large, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array:  the array of ints
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	recursion(array, 0, size - 1, size);
}
