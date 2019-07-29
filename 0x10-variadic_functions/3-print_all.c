#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - a function that prints everything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	unsigned int counter = 0, j, i = 0;
	char *p;
	const char arguments[] = "cifs";
	va_list myList;

	va_start(myList, format);
	while (format && format[counter])
	{
		j = 0;
		while (arguments[j])
		{
			if (format[counter] == arguments[j] && i)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[counter])
		{
		case 'c':
			printf("%c", va_arg(myList, int)), i = 1;
			break;
		case 'i':
			printf("%d", va_arg(myList, int)), i = 1;
			break;
		case 'f':
			printf("%f", va_arg(myList, double)), i = 1;
			break;
		case 's':
			p = va_arg(myList, char *), i = 1;
			if (!p)
			{
				printf("(nil)");
				break;
			}
			printf("%s", p);
			break;
		} counter++;
	}
	printf("\n"), va_end(myList);
}
