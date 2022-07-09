#ifndef LISTS
#define LISTS
/*Standard Libs*/
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Macro to read a linked list. Only used for project #1 */
#define countlinkedlist() for (n = 0, tmp = h ; tmp ; tmp = tmp->next, n++)

/* Macro to fill in a new linked list item. Only used for project #3 */
#define populatenew() do {			\
		new->next = NULL;		\
		new->str = strdup(str);		\
		new->len = strlen(str);		\
	} while (0)
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
void free_list(list_t *head);
/* size_t returns */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

/* list_t returns */
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif /* LISTS */
