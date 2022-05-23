#include <stdio.h>
/*
 * This C program the alphabet backwards
 */

/**
 * main - call var, print backwards
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
