#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that print strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list myList;
		unsigned int counter;
		char *p;

		va_start(myList, n);

		for (counter = 0 ; counter < n; counter++)
		{
			p = va_arg(myList, char *);
			if (p == NULL)
				printf("(nil)");
			else
				printf("%s", p);
			if (counter < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(myList);
	}
}
