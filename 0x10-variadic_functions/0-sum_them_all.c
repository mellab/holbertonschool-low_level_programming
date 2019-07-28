#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: numbers of integers passed to the function
 *
 * Return: the sum of all its parameters, otherwise if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter, addition = 0;
	va_list vaList;

	va_start(vaList, n);

	for (counter = 0; counter < n; counter++)
		addition += va_arg(vaList, int);

	va_end(vaList);
	return (addition);
}
