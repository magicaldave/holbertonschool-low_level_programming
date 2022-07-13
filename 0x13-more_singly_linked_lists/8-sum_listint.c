#include "lists.h"

/**
 * sum_listint - Reads and adds all data elements of a linked list
 * @head: head of LL
 * Return: sum of elements
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum;

	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;
	return (sum);
}
