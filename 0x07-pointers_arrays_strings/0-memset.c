#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: length of string
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; i < (int) n; i++)
	{
	        s[i] = b;
	}
	return (s);
}
