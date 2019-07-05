#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string number one
 * @src: string number two
 * @n: Size of the src string
 *
 * Return: a concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0' && i < 97 && j < n; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
