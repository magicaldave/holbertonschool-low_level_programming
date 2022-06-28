#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input;

	va_start(input, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(input, int));
		if (i != 3)
			printf("%s", separator);
	}
	va_end(input);
}
