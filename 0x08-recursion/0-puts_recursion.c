#include "main.h"

/**
 * _puts_recursion - prints an entire string using recursion
 * @s: string to print
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
}
