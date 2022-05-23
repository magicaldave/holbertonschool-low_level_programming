#include <stdio.h>
/*
 * This C program outputs all combinations of single digits
 */

/**
 * main - call var, print upwards if var1 < var2
 * Return: always 0
 */
int main(void)
{
	int ch;
	int ch2;

	for (ch = '0'; ch < '9'; ch++)
	{
		for (ch2 = '1' ; ch2 <= '9' ; ch2++)
			if (ch < ch2)
			{

				putchar(ch);
				putchar(ch2);
				if (ch < '8')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	putchar('\n');
	return (0);
}
