#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Holberton
 */

int main(void)
{
	char string[] = "Holberton\n";
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
	}
	return (0);
}
