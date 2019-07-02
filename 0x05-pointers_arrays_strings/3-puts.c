#include "holberton.h"

/**
 * _puts - prints a string
 * @str: a string of characters
 *
 */

void _puts(char *str)
{
	int stdout;

	stdout = 0;

	while (*(str + stdout) != '\0')
	{
		_putchar(*(str + stdout));
		stdout++;
	}
		_putchar('\n');
}
