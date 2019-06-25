#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: every minute starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
