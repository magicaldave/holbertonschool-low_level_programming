#include "main.h"

/*
 * This program returns if an input number is positive, negative, or zero.
 */

/**
 * print_sign - Checks int value of c
 * Return: 0 if zero, 1 if positive, -1 if negative, 255 if you broke it
 * @c: char to check as int
 */
int print_sign(int c)
{
	if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (255);
}
