#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed
 * @n: numbers of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list myList;
		unsigned int counter;

		va_start(myList, n);

		for (counter = 0 ; counter < n; counter++)
		{
			printf("%i", va_arg(myList, int));
			if (counter < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(myList);
	}
}
