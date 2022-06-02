#include "main.h"

/**
 * puts2 - prints every other character from input string
 * Return: always 0
 * @s: string input to read
 */

void puts2(char *s)
{
	int i;

	for (i = 0 ; i <= (_strlen(s) - 1) ; i++)
	{
		if (i % 2 == 0)
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
