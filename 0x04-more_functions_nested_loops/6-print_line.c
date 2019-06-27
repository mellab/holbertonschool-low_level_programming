#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Variable for defining the number of times the character _ should be
 * printed
 */

void print_line(int n)
{
	int l;

	if (n > -1)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
