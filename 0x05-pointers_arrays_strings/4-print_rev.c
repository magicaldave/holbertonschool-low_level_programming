#include "main.h"

/**
 * print_rev - reads and prints 1D array
 * Return: always 0
 * @s: string input to read
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

/**
 * _strlen - reads 1D array
 * Return: number of characters from input
 * @s: string input to read
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
