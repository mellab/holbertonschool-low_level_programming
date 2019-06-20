#include <stdio.h>

/**
 * main - entry point
 *
 * Return: The alphabet in lowercase
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
