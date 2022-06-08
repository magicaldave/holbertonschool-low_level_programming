#include "main.h"

void _print_rev_recursion(char *s)
{
	int i = 0;
	(*s)
	{
		i++;
		_print_rev_recursion(&s[i]);
		_putchar(*s);
	}
	else
		return;
}
