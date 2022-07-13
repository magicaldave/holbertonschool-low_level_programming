#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new LL element at a given location
 * @head: current linked list head
 * @idx: location to insert element
 * @n: data input for new element
 * Return: address of element inserted
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;

		for (i = 0; i < idx; i++)
		{
			prev = temp;
			temp = temp->next;
		}

		prev->next = new;
		new->next = temp;

		return (new);
	}
	return (NULL);
}
