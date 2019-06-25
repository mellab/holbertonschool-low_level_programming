#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer
 * @i: Value to calculate
 *
 * Return: Computed absolute value of an integer
 */

int _abs(int i)
{
if (i < 0)
{
return (-i);
}
return (i);
}
