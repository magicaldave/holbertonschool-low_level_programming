#include "lists.h"
/**
 * add_node_end - add a node to the tail of a linked list
 * @head: pointer to first node
 * @str: string to fill in new node
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	populatenew(); /* next is NULL, strdup str, strlen str */

	if (*head)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		return (new);
	}
	*head = new;

	return (new);
}
