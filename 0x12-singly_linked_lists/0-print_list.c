#include "lists.h"

/**
 * print_list - prints a linked list's elements
 * @h: pointer to first element
 * Return: # of elements printed
 */

size_t print_list(const list_t *h)
{
	int n;
	const list_t *tmp;

	for (n = 0, tmp = h ; tmp ; tmp = tmp->next, n++)
	{
		if (!tmp->str)
		{
			printf("[0] (nil)\n");
			continue;
		}

		printf("[%d] %s\n", tmp->len, tmp->str);
	}

	return (n);
}
