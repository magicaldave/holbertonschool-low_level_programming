#include "main.h"

/**
 * _isupper - converts characters to int and checks their case based on value
 * Between a and z
 * Return: 0 if lowercase, 1 if anything else
 * @c: char to convert in ASCII Decimal
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
