#include "lists.h"

/**
 * add_nodeint - adds a node at head of LL
 * @head: current LL head
 * @n: integer to populate in new list
 * Return: new linked list head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t)); /* Allocate new space*/

	if (!newnode)
		return (NULL); /* Close if alloc failed*/

	newnode->next = *head; /* Next node is current head */
	newnode->n = n; /* Value inside struct at n is set to input n */

	*head = newnode; /* Make newnode the head */

	return (*head);
}
