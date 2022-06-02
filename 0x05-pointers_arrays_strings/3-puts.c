#include "main.h"

/**
 * _puts - reads and prints 1D array
 * Return: always 0
 * @str: string input to read
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
