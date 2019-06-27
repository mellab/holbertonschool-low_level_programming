#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Variable for defining the number of times the character \ should be
 * printed
 */

void print_diagonal(int n)
{
	int d, s;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
