#include "main.h"

/*
 * This program uses a loop to output a lowercase alphabet
 */

/**
 * print_alphabet_x10 - prints a string in an array via a loop, ten times
 */
void print_alphabet_x10(void)
{
	int i;
	int runs = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";
	int length = (sizeof(s) - 1);

	while (runs < 10)
	{
	for (i = 0 ; i < length ; i++)
		_putchar(s[i]);
	runs++;
	}
}
