#ifndef LISTS
#define LISTS
/*Standard Libs*/
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Macro to read a linked list. only used for project #1 */
#define countlinkedlist() for (n = 0, tmp = h ; tmp ; tmp = tmp->next, n++)

/**
 * struct node - linked list item
 * @str: string element
 * @len: length of string
 * @next: points to next node
 */
typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;
/*Function Prototypes*/
size_t print_list(const list_t *h);
size_t list_len (const list_t *h);
#endif /* LISTS */
