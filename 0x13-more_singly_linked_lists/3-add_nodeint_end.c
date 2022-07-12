#include "lists.h"

/**
 * add_nodeint_end - adds element to end of list
 * @head: current LL head
 * @n: integer n to populate in new item
 * Return: Current end of linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->next = NULL; /* New element points to nowhere (end) */
	new->n = n; /* But it has something in it */

	if (*head) /* If you actually got a value  */
	{
		while (temp->next) /* While there is another element */
			temp = temp->next; /* move to it */
		temp->next = new; /* NEW is now the final element */
		return (new);
	}
	*head = new; /* Head assigned to new item */

	return (new); /* Why? */
}
