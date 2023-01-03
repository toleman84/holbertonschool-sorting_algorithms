#include "sort.h"

/**
 * swap - Short description
 * @xp: first memer
 * @yp: scond member
 *
 * Return: void.
 */
void _swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

