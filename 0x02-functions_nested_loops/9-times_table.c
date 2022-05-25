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
			int prod = (l * w);

			if (prod == 0)
			{
				_putchar(prod + '0');
				if (l == 0 && w != 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
			else if (prod >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(((l * w) / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar((prod % 10) + '0');
			}
		}
		_putchar(10);
	}
}
