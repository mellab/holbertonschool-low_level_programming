#include <stdio.h>

/**
 * main - entry point
 *
 * Return: The numbers from 00 to 99 separated by commas
 */

int main(void)
{
	int bc;
	int cd;

	for (bc = '0' ; bc <= '9' ; bc++)
	{
		for (cd = '0' ; cd <= '9'; cd++)
		{
			putchar(bc);
			putchar(cd);
			if (bc != '9' || cd != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
