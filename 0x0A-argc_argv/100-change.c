#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if the number of arguments passed to the program is not exactly 1,
 * otherwise return 0
 */

int main(int argc, char *argv[])
{
	int a, b, cent = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (b = 0; b < 5; b++)
		{
			if (a >= change[b])
			{
				a -= change[b];
				cent += 1;
				if (a >= change[b])
				{
					b--;
				}
				else if (a == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", cent);
		return (0);
	}
}
