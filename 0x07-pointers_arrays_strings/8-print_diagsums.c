#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: source
 * @size: size
 *
 */

void print_diagsums(int *a, int size)
{
	int g;
	int sum1 = 0;
	int sum2 = 0;

	for (g = 0; g < size; g++)
	{
		sum1 += *(a + ((size * g) + g));
		sum2 += *(a + (size - 1) * (g + 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
