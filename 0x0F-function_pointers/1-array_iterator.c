#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an carray
 * @size: size of the array
 * @action: pointer to the function we need to use
 * @array: array to pass
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array && action != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(action) (array[c]);
		}
	}
}
