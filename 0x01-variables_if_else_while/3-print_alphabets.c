#include <stdio.h>

/**
 * main - entry point
 *
 * Return: The alphabet in lowercase, then in uppercase
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);

	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
