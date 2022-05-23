#include <stdio.h>
/*
 * This C program outputs all combinations of single digits
 */

/**
 * main - call var, print upwards
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(44);
			putchar(32);
		}
}
	putchar('\n');
	return (0);
}
