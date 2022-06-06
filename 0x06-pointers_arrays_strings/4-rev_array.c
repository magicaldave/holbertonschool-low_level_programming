#include "holberton.h"

/**
 * reverse_array - takes an input array and reverses it
 * @a: array to reverse
 * @n: charactyer count of array
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int count = 0, tmp;

	n--;
	while (n > count)
	{
		tmp = a[n];
		a[n] = a[count];
		a[count] = tmp;
		n--;
		count++;
	}
}

