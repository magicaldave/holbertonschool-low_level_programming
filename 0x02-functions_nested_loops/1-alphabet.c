#include "main.h"

/*
 * This program uses a loop to output a lowercase alphabet
 */

/**
 * print_alphabet - prints a string in an array via a loop
 */
void print_alphabet(void)
{
	int i;
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";
	int length = (sizeof(s) - 1);

	for (i = 0 ; i < length ; i++)
		_putchar(s[i]);
}
