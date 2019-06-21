#include <stdio.h>

/**
 * main - entry point
 *
 * Return: The alphabet in lowercase and backwards
*/

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
