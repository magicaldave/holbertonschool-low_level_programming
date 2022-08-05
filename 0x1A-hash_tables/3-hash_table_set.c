#include "hash_tables.h"
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
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
		for (i = 0; ht->array[i]; i++)
		;
	}
	ht->array[i] = new;
	return (1);
}
