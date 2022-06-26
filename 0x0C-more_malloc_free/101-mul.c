#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int count, char *args[])
{
	int  i, c, **nums, *num1, *num2;

	if (count != 3)
	{
		printf("Error\n");
		exit(98);
	}

	nums = malloc(3 * (size_t)sizeof(*nums));
	num1 = malloc(strlen(args[1]) * sizeof(int));
	num2 = malloc(strlen(args[2]) * sizeof(int));
	nums[0] = num1;
	nums[1] = num2;

	for (i = 0 ; nums[i] ; i++)
	{
		for (c = 0 ; args[i + 1][c] != '\0' ; c++)
		{
			if (args[i + 1][c] < 48 || args[i + 1][c] > 57)
			{
				printf("Error\n");
				exit(98);
			}
			nums[i][c] = (args[i + 1][c] - '0');
			printf("I: %d Num:  %d ", i, nums[i][c]);
		}
	}

	return (0);
}
