#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - takes variable inputs of all types and prints 'em!
 * @format: formats of each input type
 * Return: None
 */

void print_all(const char * const format, ...)
{
	char *str, *sep;
	int i = 0;
	va_list inputs;

	va_start(inputs, format);

	while (format[i])
	{
		sep = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(inputs, int));
			break;
		case 'i':
			printf("%i", va_arg(inputs, int));
			break;
		case 'f':
			printf("%f", va_arg(inputs, double));
			break;
		case 's':
			str = va_arg(inputs, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			sep = "";
			break;
		}
		if (format[i + 1] && sep)
			printf(sep);
		i++;
	}

	va_end(inputs);

	putchar(10);
}
