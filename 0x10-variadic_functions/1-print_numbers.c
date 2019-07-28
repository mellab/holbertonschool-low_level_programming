#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed
 * @n: numbers of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list myList;

	va_start(myList, n);

	for (counter = 1; counter <= n; counter++)
	{
		printf("%i", va_arg(myList, int));
		if (counter < n && separator)
		{
			printf("%s", separator);
		}
		else
		{
			;
		}
	}
	printf("\n");
	va_end(myList);
}
