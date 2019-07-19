#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first array
 * @max: second array
 *
 * Return: the pointer to the newly created array. Otherwise if min > max or
 * malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	array = malloc(len * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(array + i) = min;
		min++;
	}

	return (array);
}
