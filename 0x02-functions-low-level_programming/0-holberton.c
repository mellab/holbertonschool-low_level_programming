#include "holberton.h"

/**
 * main - entry point
 *
 * Return: A string
 */

int main(void)
{
	char string[] = "Holberton\n";
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (0);
}
