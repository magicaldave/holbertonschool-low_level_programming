#include "holberton.h"

/**
 * string_toupper - converts lowercase to uppercase characters
 * @str: input string to translate
 * Return: translated string as pointer
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
