#include "function_pointers.h"
/**
 * print_name - use callback function to print input
 * @name: string to print
 * @f: function to call; no return, takes string (char pointer)
 */

void print_name(char *name, print f)
{
	if (name && f)
		f(name);
}
