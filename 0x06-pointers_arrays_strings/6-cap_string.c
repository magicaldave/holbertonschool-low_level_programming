#include "holberton.h"

/**
 * string_toupper - converts lowercase to uppercase characters per word
 * @str: input string to translate
 * Return: translated string as pointer
 */

char *cap_string(char *str)
{
	int i, seps;
	int newword;

	char separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (seps = 0 ; separators[seps] != '\0' ; seps++)
		{
			if (separators[seps] == str[i])
				newword = 1;
		}
		if (!(str[i + 1] >= 97) && (str[i + 1] <= 122))
			newword = 0;
		else if (str[i] >= 97 && str[i] <= 122 && newword == 1)
		{
			newword = 0;
			str[i] -= 32;
		}

	}
	return (str);
}
