#include "lists.h"

/**
 *
 *
 *
 *
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
