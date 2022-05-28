#include "main.h"

/**
 * print_numbers - writes all single digit characters to stdout
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int c;
	for (c = 48 ; c <= 57 ; c++)
	{
		if (c != 52 && c !=50)
		_putchar(c);
	}
	_putchar(10);
}
