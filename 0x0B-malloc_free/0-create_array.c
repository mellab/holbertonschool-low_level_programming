#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: the size of the memory to print
 * @c: char int value
 * Return: NULL if size = 0
 * a pointer to the array, otherwise returns NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arrayToPrint = NULL;
	unsigned int character;

	if (size > 0)
	{
		arrayToPrint = (char *)malloc(size * sizeof(char));
		if (arrayToPrint == NULL)
			return (NULL);
		for (character = 0; character < size; character++)
			arrayToPrint[character] = c;
	}
	return (arrayToPrint);
}
