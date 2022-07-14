#include "main.h"

/**
 * print_binary - prints a binary representation of a number
 * @n: (possibly very large) number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len;

	bitlen(n); /* len = bit length of n */

	for (mask <<= len; mask > 0; mask >>= 1)
		(n & mask) ? _putchar('1') : _putchar('0');
}
