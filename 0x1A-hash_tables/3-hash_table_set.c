#include "hash_tables.h"
#define nextelem(var) var->next
#define freeall(hash_node) do {			\
		free((hash_node)->key);		\
		free((hash_node)->value);		\
		free((hash_node));		\
						\
	} while (0)
/**
 * hash_table_set - sets an element of a hash table
 * @ht: hash table object
 * @key: search object to indicate @value
 * @value: value to store per key
 * Return: 1 on success, 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t i;
	hash_node_t *new, *current;

	if (!ht || !key || *key == '\0')
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	current = ht->array[i];

	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new->next = current;
			ht->array[i] = new;
			return (1);
		}
		while (current->next)
		{
			if (strcmp(current->next->key, key) == 0)
			{
				nextelem(new) = nextelem(current->next);
				freeall(nextelem(current));
				nextelem(current) = new;
				return (1);
			}
			current = current->next;
		}
	}
	nextelem(new) = ht->array[i];
	ht->array[i] = new;
	return (1);
}
