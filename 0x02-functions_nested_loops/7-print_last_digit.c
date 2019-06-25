#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: entire to check
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int lDigit;

	lDigit = n % 10;

	if (lDigit < 0)
	{
		_putchar(-lDigit + '0');
		return (-lDigit);
	}
	else
	{
		_putchar(lDigit + '0');
		return (lDigit);
	}
}
