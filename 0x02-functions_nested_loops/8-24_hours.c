#include "main.h"

/*
 * This program is a day in the life of jack bauer.
 */

/**
 * jack_bauer - prints a day in the life of jack bauer
 * Return: always 0
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h <= 23 ; h++)
	{
		for (m = 0 ; m <= 59 ; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(58);
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(10);
		}
	}
}
