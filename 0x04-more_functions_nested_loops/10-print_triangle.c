#include "main.h"

/**
 * print_triangle - print a triangle with n number of lines and hashtags
 * Return: void
 * @n: number of lines and # to print
 */

void print_triangle(int size)
{
	int x, y;

	if ( size == 0 )
		_putchar(10);
	else
		for (y = 0 ; y < size ; y++)
		{
			for (x = (size - y) ; x > 1 ; x--)
			{
				_putchar(32);
			}
			for (x = 0 ; x <= y ; x++)
				_putchar('#');
			_putchar(10);
		}
}
