#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *p;
	va_list myList;

	va_start(myList, n);

	for (counter = 1; counter <= n; counter++)
	{
		p = va_arg(myList, char*);

		if (p)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
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
