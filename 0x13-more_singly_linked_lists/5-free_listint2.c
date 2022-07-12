#include "lists.h"
#include "4-free_listint.c"
/**
 * free_listint2 - frees memory used by a LL
 * @head: head of LL
 * Return: None
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;
	free_listint(*head);
	*head = NULL;
}
