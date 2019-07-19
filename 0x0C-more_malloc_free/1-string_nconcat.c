#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat- concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: a pointer to the newly allocated space in memory, otherwise if it
 * fails return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len, s2Len, i, amount;
	char *conStr;

	i = 0;
	s1Len = 0;
	s2Len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1Len))
		s1Len++;
	while (*(s2 + s2Len))
		s2Len++;

	if (n >= s2Len)
		amount = s2Len;
	else
		amount = n;

	conStr = malloc((s1Len + amount + 1) * sizeof(char));
	if (conStr == NULL)
		return (NULL);

	for (i = 0; i < s1Len; i++)
		*(conStr + i) = *(s1 + i);
	for (i = s1Len; i < (s1Len + amount); i++)
		*(conStr + i) = *(s2 + i - s1Len);
	*(conStr + i) = '\0';

	return (conStr);
}
