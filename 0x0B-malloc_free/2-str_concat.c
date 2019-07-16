#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: A returned pointer tha points to a newly allocated space in memory
 * which contains in the contents of s1, followed by the contents of s2, and
 * null terminated, otherwise return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c = 0;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		;

	for (b = 0; s2[b]; b++)
		;

	p = malloc((a + b + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (c = 0; s1 && s1[c]; c++)
		p[c] = s1[c];
	p[c] = '\0';

	for (c = 0; s2 && s2[c]; c++)
		p[a + c] = s2[c];
	p[a + c] = '\0';

	return (p);
}
