#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - a function that prints everything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int counter = 0;
	va_list myList;
	char *p;

	va_start(myList, format);

	while (format[counter] != '\0')
	{
		switch (format[counter])
		{
			case 'c':
				printf("%c", va_arg(myList, int));
				break;
			case 'i':
				printf("%i", va_arg(myList, int));
				break;
			case 'f':
				printf("%f", va_arg(myList, double));
				break;
			case 's':
			p = va_arg(myList, char *);
				printf("%s", va_arg(myList, char *));
				if (!p)
				{
					printf("%p", p);
					break;
				}
					printf("%s", p);
				break;
			default:
				counter++;
				continue;
		}
		if (format[counter + 1] != '\0')
			printf(", ");
		counter++;
	}
	printf("\n");
	va_end(myList);
}
