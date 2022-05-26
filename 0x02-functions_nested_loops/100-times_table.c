#include "main.h"
/**
 * print_times_table - accepts a single integer and outputs a full times table
 * for that integer.
 * Return: Always 0
 * @n: integer to set range of multiplication table
 */
void print_times_table(int n)
{
	int x, y;

	for (x = 0 ; x <= n ; x++)
	{
		if (n < 0 || n > 15)
			continue;
		for (y = 0 ; y <= n ; y++)
		{
			int prod = (x * y);
			int ones = (prod % 10);
			int tens = ((prod / 10) % 10);
			int hundreds = (prod / 100);

			if (y > 0)
			{
				_putchar(44);
				_putchar(32);
				if (hundreds != 0)
				{
					_putchar(hundreds + '0');
				}
				else
					_putchar(32);
				if (tens != 0 || hundreds > 0)
					_putchar(tens + '0');
				else
					_putchar(32);
			}
			_putchar(ones + '0');
		}
		_putchar(10);
	}
}
