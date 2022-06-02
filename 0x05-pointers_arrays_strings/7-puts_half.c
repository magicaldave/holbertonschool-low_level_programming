#include "main.h"

/**
 * puts_half - prints last half of input string
 * Return: always 0
 * @s: string input to read
 */

void puts_half(char *s)
{
	int i;
	int n = (_strlen(s) / 2);

	if ((_strlen(s) % 2) == 1)
		n+=1;

	for (i = n ; i <= (_strlen(s) - 1) ; i++)
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
