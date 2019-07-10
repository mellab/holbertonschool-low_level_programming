#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integers
 *
 * Return: factorials
 */

int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
		else
		{
			return (1);
		}
}
