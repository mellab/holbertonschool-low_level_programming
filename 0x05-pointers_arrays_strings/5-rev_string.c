#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string of characters
 *
 */

void rev_string(char *s)
{
	int a;
	int b = 0;
	int c = 0;
	int z[500];

	for (a = 0; a < 500; a++)
	{
		if (s[a] == '\0')
			break;
		c++;
	}
	for (a = c - 1; a >= 0; a--)
	{
		z[b] = s[a];
		b++;
	}
	for (a = 0; a < c; a++)
	{
		s[a] = z[a];
	}
}
