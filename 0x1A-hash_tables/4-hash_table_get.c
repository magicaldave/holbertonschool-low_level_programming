#include "hash_tables.h"
/**
 * hash_table_get - gets a matched value from a hash table
 * @ht: hash table to look up
 * @key: key to search for in table
 * Return: matched value in table, or NULL if no match
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	char *reqval = NULL;
	hash_node_t *cmp;

	if (!ht || !key || *key == '\0')
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	cmp = ht->array[i];

	for (; cmp; cmp = cmp->next)
	{
		if (strcmp(key, cmp->key) == 0)
			reqval = cmp->value;
	}

	return (reqval);
}
