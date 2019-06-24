#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Description: Print the alphabet through a prototype
 *
 * Return: The alphabet in lowercase
 */

/* print_alphabet prototype function */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a' ; abc <= 'z' ; abc++)
		_putchar(abc);
	_putchar('\n');
}
