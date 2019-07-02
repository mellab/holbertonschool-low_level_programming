#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string of characters
 *
 */

void print_rev(char *s)
{
	int a;
	int b = 0;

	for (a = 0; a < 500; a++)
	{

		if (s[a] == '\0')
			break;
		b++;
	}
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
