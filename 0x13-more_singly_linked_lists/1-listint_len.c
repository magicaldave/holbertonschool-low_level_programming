#include "lists.h"

/**
 * listint_len - reads LL and counts elements
 * @h: current head of LL
 * Return: number of elements as unsigned int
 */

size_t listint_len(const listint_t *h)
{
	int n;
	const listint_t *tmp;

	for (n = 0, tmp = h; tmp; tmp = tmp->next, n++)
	{
		/* N = 0, tmp is input element (head) */
		/* On update, move to next element, count */
	}

	return (n);
}
