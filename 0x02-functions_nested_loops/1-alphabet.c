#include "main.h"

/*
 * This program uses a loop to output a lowercase alphabet
 */

/**
 * main - prints a string in an array via a loop
 */
void print_alphabet (void)
{
	int i;
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";
	int length = sizeof(s)/sizeof(s[0]);
	for (i = 0 ; i < length ; i++)
		_putchar(s[i]);
}
