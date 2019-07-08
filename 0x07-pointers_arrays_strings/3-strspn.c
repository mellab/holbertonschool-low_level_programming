#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: second string
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, k;
	int l = 0;

	for (j = 0 ; s[j] ; j++)
	{
		for (k = 0 ; accept[k] ; k++)
		{
			if (s[j] == accept[k])
				l++;
		}
	if (j > l)
		break;
	}
	return (l);
}
