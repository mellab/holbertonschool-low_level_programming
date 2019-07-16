#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string to return
 * Return: NULL if str = NULL. On success the _strdup returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int m;
	unsigned int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m] != '\0'; m++)
	{
		size++;
	}
	p = (char *)malloc((size + 1) * sizeof(char));

	if (p != NULL)
	{
		for (m = 0; m < size; m++)
			p[m] = str[m];
	}
	else
	{
		p = NULL;
	}
	return (p);
}
