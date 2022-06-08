#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse
 * @s: string to rev
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_print_rev_recursion(&s[i]);
		_putchar(*s);
	}
	else
		return;
}
