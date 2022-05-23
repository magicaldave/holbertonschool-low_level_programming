#include <stdio.h>
/*
 * This C program outputs some simple strings using putchar
 */

/**
 * main - prints the alphabet and a newline
 * Return: a big integer and a trailing string
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
