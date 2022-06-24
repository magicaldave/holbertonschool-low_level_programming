#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - use callback function to print input
 * @name: string to print
 * @f: function to call; no return, takes string (char pointer)
 */

void print_name(char *name, print f)
{
	if (name != NULL)
		f(name);
}
