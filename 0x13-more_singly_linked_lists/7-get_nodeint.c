#include "lists.h"

/**
 * get_nodeint_at_index - finds element at a given place
 * @head: current LL head
 * @index: location at LL to read
 * Return: address to requested element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
