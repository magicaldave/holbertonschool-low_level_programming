#include <stdio.h>
/*
 * This C program outputs all combinations of single digits, twice
 */

/**
 * main - call two vars, print upwards if var1 < var2
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 99 ; x++)
	{
		for (y = (x + 1) ; y <= 99 ; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(32);
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x == 98 && y == 99)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
