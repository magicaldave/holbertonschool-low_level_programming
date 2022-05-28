#include "main.h"

/*
 * Checks if inputs are digits or otherwise
 */

/**
 * _isdigit - checks characters to see whether they are in the integer range
 * Return: 1 if digit, 0 if otherwise
 * @c: char to convert in ASCII Decimal
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
