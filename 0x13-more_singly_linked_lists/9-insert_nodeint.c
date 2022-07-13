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
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && (i != idx - 1) ; i++)
		temp = temp->next;

	if (i != (idx - 1))
		return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
