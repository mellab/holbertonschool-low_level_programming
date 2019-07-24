#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to pass
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0. Otherwise, if no element matches or if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if ((*cmp) (array[c]))
		{
			return (c);
		}
	}
	return (-1);
}
