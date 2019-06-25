#include "holberton.h"

/**
 * int _isalpha - entry point
 *
 * Description: Checks for alphabetic character
 *
 * Return: 1 if c is a letter, returns 0 otherwise
 */

/* int _isalpha prototype function */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
else
		return (0);
}
