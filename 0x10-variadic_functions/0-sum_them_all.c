#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list input;

	if (n)
	{
		va_start(input, n);

		for (i = 0; i < n ; i++)
			sum += va_arg(input, int);
		va_end(input);

		return (sum);
	}
	return (0);
}
