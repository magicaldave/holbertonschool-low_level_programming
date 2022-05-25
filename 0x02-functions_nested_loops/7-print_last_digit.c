#include "main.h"

/*
 * This program returns if an input number is positive, negative, or zero.
 */

/**
 * print_last_digit - prints last digit of input (int)
 * Return: int result of print_last_digit ready for ASCII conversion
 * @v: int to evaluate
 */
int print_last_digit(int v)
{
	v = ((v % 10) * ((v > 0) - (v < 0)));
	_putchar(v + '0');
	return (v);
}
