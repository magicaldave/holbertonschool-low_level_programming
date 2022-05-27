/*DAVECORLEY*/
#include <stdio.h>
/**
 * main - Print the first 98 fibonacci numbers space-separated
 * For large ints, chop into two halves and continue series.
 * Return: always 0
 */
int main(void)
{
	int count;
	unsigned long p1x = 1;
	unsigned long p2x = 0;
	unsigned long sum = 0;
	unsigned long h1, h2, p2x_h1, p2x_h2, p1x_h1, p1x_h2;

	for (count = 0 ; count < 92 ; count++)
	{
		sum = (p1x + p2x);
		p2x = p1x;
		p1x = sum;
		printf("%lu, ", sum);
	}
	p1x_h1 = p1x / 10000000000;
	p1x_h2 = p1x % 10000000000;
	p2x_h1 = p2x / 10000000000;
	p2x_h2 = p2x % 10000000000;
	for (count = 92 ; count < 98 ; count++)
	{
		h1 = (p1x_h1 + p2x_h1);/*on each iteration, update both halves*/
		h2 = (p1x_h2 + p2x_h2);
		if (p1x_h2 + p2x_h2 > 9999999999)
		{
		h1 += 1; /*increase ones value of first half if */
		h2 %= 10000000000;/* the second overflows into it on add'n*/
		}
		p2x_h1 = p1x_h1;
		p2x_h2 = p1x_h2;
		p1x_h1 = h1;
		p1x_h2 = h2;
		printf("%ld%ld", h1, h2);
		if (count != 97)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
