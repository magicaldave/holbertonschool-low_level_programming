#include "main.h"

/*
 * This program outputs a 9 times table.
 */

/**
 * times_table - outputs a 9 times table with two loops.
 * Return: always 0
 */
void times_table(void)
{
	int l, w;

	for (l = 0 ; l <= 9 ; l++)
	{
		for (w = 0 ; w <= 9 ; w++)
		{
			if ( (l * w) < 10 )
			{
				_putchar(32);
				_putchar(32);
				_putchar(( (l * w) ) + '0');
				_putchar(44);
			}
			else
			{
				_putchar(( (l * w) / 10) + '0');
				_putchar(((l * w) % 10) + '0');
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
