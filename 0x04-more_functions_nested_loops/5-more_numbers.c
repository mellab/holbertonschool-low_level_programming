#include "holberton.h"

/**
 * more_numbers - prints 10 the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int n, row;

	for (row = 0 ; row < 10; row++)
	{
		for (n = 0 ; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
	_putchar ('\n');
	}
}
