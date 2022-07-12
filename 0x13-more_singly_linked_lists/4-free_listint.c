#include "lists.h"
/**
 * free_listint - frees memory used by a LL
 * @head: head of LL
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp->next)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
