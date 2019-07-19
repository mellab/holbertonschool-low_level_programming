#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == 0 && ptr != '\0')
	{
		*p = malloc(new_size);
	}
	else if (new_size == old_size)
	{
		return (*p);
	}
	else if (new_size > old_size)
	{
		break;
	}
	else
	{
	}
}
