#include "main.h"

/**
 * set_string - using a double pointer, rewrite a string
 * @s: destination string
 * @to: source string
 * Return: always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
