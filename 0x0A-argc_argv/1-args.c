#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count to number the arguments
 * @argv: argument vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc;)
	{
		counter++;
		(*argv)++;
	}
	printf("%d\n", counter - 1);
	return (0);
}
