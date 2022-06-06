#include "main.h"

/**
 * print_rev - reads and prints 1D array
 * Return: always 0
 * @s: string input to read
 */

void print_rev(char *s)
{
	int i, n;

	for (n = 0 ; s[n] != '\0' ; n++)
	{
	}
	for (i = (n - 1) ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
