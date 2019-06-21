#include <stdio.h>

/**
 * main - entry point
 *
 * Return: The alphabet in lowercase, then in uppercase
*/

int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
		putchar(c);

	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
