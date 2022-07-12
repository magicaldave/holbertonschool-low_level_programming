#include "lists.h"

/**
 * free_listint - frees memory used by a LL
 * @head: head of LL
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
