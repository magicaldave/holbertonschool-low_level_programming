#include "main.h"

/**
 * _strlen_recursion - (char *s)
 * @s: string to count
 * Return: number of characters counted
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s)
	{
		c++;
		c += _strlen_recursion(&s[c]);
		return (c);
	}
	return (0);
}
