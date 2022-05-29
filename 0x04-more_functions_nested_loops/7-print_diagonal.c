#include "main.h"

/**
 * print_diagonal - prints n lines with n number of spaces before a \
 * Return: void
 * @n: positive integer indicating # to print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int i, s;

		for (i = 0 ; i < n ; i++)
		{
			for (s = 0 ; s < i ; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
