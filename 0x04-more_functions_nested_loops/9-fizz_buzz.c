#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the numbers from 1 to 100, followed by a new line. But
 * for multiplies of three print Fizz instead of the number and for the
 * multiplies of five print Buzz. For numbers which are multiples of both three
 * and five print FizzBuzz.
 *
 * Return: 0
 */

int main(void)
{
	int a;

		for (a = 1; a <= 100; a++)
		{
			if ((a % 15) == 0)
			{
				printf("FizzBuzz ");
			}
			else if ((a % 3) == 0)
			{
				printf("Fizz ");
			}
			else if ((a % 5) == 0)
			{
				printf("Buzz ");
				if (a != 100)
					printf(" ");
			}
			else
			{
				printf("%d ", a);
			}
		}
		printf("\n");
		return (0);
}
