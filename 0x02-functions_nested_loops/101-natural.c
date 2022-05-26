#include <stdio.h>
/**
 * main - add together all multiples of 3 or 5 below 1024
 * Return: value of sum variable
 */
int main(void)
{
	int count;
	int sum = 0;

	for (count = 0 ; count < 1024 ; count++)
	{
		if ((count % 3) == 0)
			sum = sum + count;
		if ((count % 5) == 0)
			sum = sum + count;
	}
	if (count == 1024)
		printf("%d\n", sum);
	return (sum);
}
