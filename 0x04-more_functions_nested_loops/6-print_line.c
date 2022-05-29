#include "main.h"

/**
 * print_line - prints underscores based on value of n
 * Return: void
 * @n: positive integer indicating # of chars to print
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0 ; i < n ; i++)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
