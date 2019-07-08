#include "holberton.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destiny string
 * @src: source string
 * @n: length of the string
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	char *newsrc = (char *)src;
	char *newdest = (char *)dest;

	while (i < (int) n)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (newdest);
}
