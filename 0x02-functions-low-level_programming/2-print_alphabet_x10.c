#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Print the alphabet 10 times through a prototype
 *
 * Return: The alphabet x10 in lowercase
 */

/* print_alphabet_x10 prototype function */
void print_alphabet_x10(void)
{
	int column;
	char abc;

	for (column = 0 ; column < 10; column++)
	{
		for (abc = 'a' ; abc <= 'z' ; abc++)
		{
		_putchar(abc);
		}
	_putchar('\n');
	}
}
