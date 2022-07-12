#include "lists.h"

/**
 * pop_listint - deletes a linked list head and returns its data
 * @head: first linked list element
 * Return: data stored in deleted element
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = 0;

	if (*head)
	{
		data = temp->n;
		*head = (*head)->next;
	}

	free(temp);

	return (data);
}
