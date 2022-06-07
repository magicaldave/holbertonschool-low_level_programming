#include "holberton.h"

/**
 * leet - encodes an input string into 1337sp33k.
 * @str: input string to translate
 * Return: translated string as pointer
 */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		((str[i] == 'a') || (str[i] == 'A')) && (str[i] = '4');
		((str[i] == 'e') || (str[i] == 'E')) && (str[i] = '3');
		((str[i] == 'o') || (str[i] == 'O')) && (str[i] = '0');
		((str[i] == 't') || (str[i] == 'T')) && (str[i] = '7');
		((str[i] == 'l') || (str[i] == 'L')) && (str[i] = '1');
	}
	return (str);
}
