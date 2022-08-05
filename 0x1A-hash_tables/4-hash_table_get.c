#include "hash_tables.h"
/**
 * hash_table_get - gets a matched value from a hash table
 * @ht: hash table to look up
 * @key: key to search for in table
 * Return: matched value in table, or NULL if no match
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t i;
	char *reqval = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	for (; ht->array[i]; i++)
		if (strcmp(key, ht->array[i]->key) == 0)
			reqval = ht->array[i]->value;
	return (reqval);

}
