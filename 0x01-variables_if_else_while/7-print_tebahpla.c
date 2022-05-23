#include <stdio.h>
/*
 * This C program outputs 0-9 using putchar
 */

/**
 * main - prints integers and a newline
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
