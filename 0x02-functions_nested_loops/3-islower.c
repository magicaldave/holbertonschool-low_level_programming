#include "main.h"

/*
 * This program uses a loop to output a lowercase alphabet
 */

/**
 * _islower - converts characters to int and checks their case based on value
 * Between a and z
 * c - char to convert in ASCII Decimal
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
			}
	else
	{
		return (0);
			}
}
