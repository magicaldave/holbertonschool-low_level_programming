#include <stdio.h>

/**
 * main - prints multiples of 3 and 5 up to 100
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(32);
	}
	putchar(10);
	return (0);
}
