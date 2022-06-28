#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a variable number of args as variadic input
 * @separator: string to place between numbers
 * @n: number of list inputs
 * Return: N/A
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input;

	va_start(input, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(input, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(input);

	putchar(10);
}
