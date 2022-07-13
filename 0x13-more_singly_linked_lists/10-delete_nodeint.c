#include "lists.h"

/**
 * delete_nodeint_at_index - removes element of a linked list
 * @head: First element of LL
 * @index: location of LL element to delete
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *todel, *temp = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		todel = *head;
		*head = (*head)->next;
		free(todel);

		return (1);
	}

	for (i = 0; temp && (i != (index - 1)); i++)
		temp = temp->next;

	if (!temp)
		return (-1);

	todel = temp->next;
	temp->next = temp->next->next;
	free(todel);

	return (1);
}
