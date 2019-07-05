#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int rev, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		rev = a[start];
		a[start] = a[end];
		a[end] = rev;
		start++, end--;
	}
}
