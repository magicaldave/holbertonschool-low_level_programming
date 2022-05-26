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
	long evensum = 0;

	for (count = 0 ; count < 32 ; count++)
	{
		sum = (p1x + p2x);
		if (sum % 2 == 0)
			evensum += sum;
		p2x = p1x;
		p1x = sum;
	}
	printf("%ld\n", evensum);
	return (0);
}
