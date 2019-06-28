#include "holberton.h"

/**
 * print_triangle - Prints a triangle
 * @size: Variable for defining the number of times that the character # should
 * be printed
 *
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		z = size - 1;

		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (z >= y)
				{
					_putchar(' ');
				}
				else
				{
				_putchar('#');
				}
			}
			z--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
