#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t i;
	hash_node_t *new, *current;

	if (!ht || !key)
		return (0);

	if (strcmp(key, "\0") == 0)
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
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}
			current = current->next;
		}
		new->next = ht->array[i];
		ht->array[i] = new;
		return (1);
	}
	ht->array[i] = new;
	return (1);
}
