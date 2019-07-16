#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *o;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	o = malloc((c + 1) * sizeof(char));

	if (o == NULL)
	{
		free(o);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			o[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			o[ia] = av[i][j];
	}
	o[ia] = '\0';

	return (o);
}
