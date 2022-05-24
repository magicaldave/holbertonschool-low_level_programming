#include "main.h"

/*
 * This program uses a loop to output "_putchar"
 */

/**
 * main - prints a string in an array via a loop
 * Return: always 0
 */
int main(void)
{
	int i;
	char s[] = "_putchar";
	int length = sizeof(s) / sizeof(s[0]);

	for (i = 0 ; i <= length ; i++)
		_putchar(s[i]);
	_putchar(10);
	return (0);
}
