#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers space-separated
 * Return: always 0
 */
int main(void)
{
	int count;

	long double p1x = 1;
	long double p2x = 0;
	long double sum = 0;

	for (count = 0 ; count < 98 ; count++)
	{
		sum = (p1x + p2x);
		printf("%.0Lf", sum);
		p2x = p1x;
		p1x = sum;
		if (count != 97)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
