#include "3-calc.h"
/**
 * main - main function for calculator
 * @count: argument count
 * @args: numbers to calc and op to perform
 * Return: always 0
 */

int main(int count, char *args[])
{
	int a, b, dividing;
	int (*op)(int, int);


	if (count != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(args[1]);
	b = atoi(args[3]);

	dividing = (args[2][0] == '/' || args[2][0] == '%') ? 1 : 0;

	if (dividing && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(args[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(a, b));

	return (0);
}
