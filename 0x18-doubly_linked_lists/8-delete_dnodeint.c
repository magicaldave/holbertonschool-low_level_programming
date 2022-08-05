#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a doubly linked list
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *nodeToDelete;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	temp = *head;
	if (!index)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;

		free(temp);
		return (1);
	}

	for (i = 1; temp && i < index; i++)
		temp = temp->next;

	if (!temp)
		return (-1);

	nodeToDelete = temp->next;
	temp->next = nodeToDelete->next;
	if (nodeToDelete->next)
		nodeToDelete->next->prev = temp;
	free(nodeToDelete);

	return (1);
}
