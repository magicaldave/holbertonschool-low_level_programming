#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: list to print
 * Return: node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int numNodes = 0;

	while (temp)
	{
		printf("%i\n", temp->n);
		numNodes++;
		temp = temp->next;
	}

	return (numNodes);
}
