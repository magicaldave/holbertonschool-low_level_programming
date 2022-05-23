#include <stdio.h>
/*
 * This C program outputs some the lower alpha without q or e
 */

/**
 * main - prints the alphabet and a newline
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	if (ch != 'e' && ch != 'q')
		putchar(ch);
	putchar('\n');
	return (0);
}
