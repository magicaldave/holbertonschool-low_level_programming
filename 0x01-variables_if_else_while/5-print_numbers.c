#include <stdio.h>
/*
 * This C program outputs numbers 0-9
 */

/**
 * main - prints all base 10 digits
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
		printf("%c", ch);
	putchar('\n');
	return (0);
}
