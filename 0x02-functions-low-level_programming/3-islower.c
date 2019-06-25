#include "holberton.h"

/**
 * int _islower - entry point
 *
 * Description: Checks for lowercase character
 *
 * Return: 1 if c is lowercase, returns 0 otherwise
 */

/* int _islower prototype function */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
