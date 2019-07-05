#include "holberton.h"

/**
 * *_strncpy - concatenates two strings
 * @dest: string number one
 * @src: string number two
 * @n: Size of the src string
 *
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
