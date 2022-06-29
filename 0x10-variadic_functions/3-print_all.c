#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	void *printstr;
	char *instr, *validargs;
	int i = 0, c;
	va_list inputs;

	validargs = "cifs";
	while (format[i])
	{
		va_start(inputs, format);
		c = 0;
		while (validargs[c] != format[i])
		{
			if (format[i] == validargs[c])
			{
			}
			c++;
		}
		switch (validargs[c])
		{
		case 'c':
			instr = va_arg(inputs, char);
			break;
		case 'i':
			instr = "i";
			break;
		case 'f':
			instr = "f";
			break;
		case 's':
			instr = "s";
			break;
		}
		if (c == 4)
		{
			i++;
			continue;
		}
		i++;
	}
}
