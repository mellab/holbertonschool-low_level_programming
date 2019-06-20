#include <stdio.h>

/**
 * main - entry point
 *
 * Return: The alphabet in lowercase without the q and e letters
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
