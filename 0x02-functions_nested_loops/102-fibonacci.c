#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers space-separated
 * Return: always 0
 */
int main(void)
{
	int count;
	long p1x = 1;
	long p2x = 0;
	long sum = 0;

	printf("%ld, ", p2x);
	printf("%ld, ", p1x);
	for (count = 0 ; count <= 50 ; count++)
	{
		sum = (p1x + p2x);
		printf("%ld, ", sum);
		p2x = p1x;
		p1x = sum;
	}
	putchar(10);
	return (0);
}
