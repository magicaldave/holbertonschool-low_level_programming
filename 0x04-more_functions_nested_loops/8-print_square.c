#include "main.h"

/**
 * print_square - print n of #, on n lines
 * Return: void
 * @size: size of square to build
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (y = 0 ; y < size ; y++)
		{
			for (x = 0 ; x < size ; x++)
				_putchar(35);
			_putchar(10);
		}
	}
}
