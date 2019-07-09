#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: second string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (b = 0 ; needle[b] ; b++)
	{
		for (a = 0 ; haystack[a] ; a++)
		{
			if (haystack[a] == needle[b])
				return (haystack + a);
		}
	}
	return ('\0');
}
