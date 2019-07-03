#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: a string of characters
 *
 */

void puts2(char *str)
{
	int z = 0;

	while (*(str + z) != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar (*(str + z));
		}
		z++;
	}
	_putchar('\n');
}
