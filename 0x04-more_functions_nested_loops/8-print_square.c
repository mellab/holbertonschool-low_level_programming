#include "holberton.h"

/**
 * print_square - Prints a square
 * @size: Variable for defining the number of times the character # should be
 * printed
 */

void print_square(int size)
{
	int x, y;

	if (size > 1)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
