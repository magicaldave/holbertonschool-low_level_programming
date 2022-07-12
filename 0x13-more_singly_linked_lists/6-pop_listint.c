#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = 0;

	if (*head)
	{
		n = temp->n;
		*head = (*head)->next;
	}

	free(temp);

	return (n);
}
