#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the new allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memAlloc;

	memAlloc = malloc(b);
	if (memAlloc == NULL)
		exit(98);
	return (memAlloc);
}
