#include "main.h"

/**
 * binary_to_uint - converts a binary input to uint
 * @b: string of 0 and 1
 * Return: 0 on bad input, or resulting int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, power = 0, result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; power++, i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		if (b[i] == '1')
			result += __pow(2, (strlen(b) - i - 1));
	}

	return (result);
}

/**
 * __pow - clone of built-in pow function
 * @a: number to multiply
 * @b: power to multiply to
 * Return: result after multiplication
 */

unsigned int __pow(unsigned int a, unsigned int b)
{
	unsigned int num = a, i = 1;

	if (b == 0)
		return (1);

	while (i < b)
	{
		num *= a;
		i++;
	}

	return (num);
}
