#include "holberton.h"

/**
 * swap_int - swap the values of two integers.
 * @a: variable one
 * @b: variable two
 *
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
