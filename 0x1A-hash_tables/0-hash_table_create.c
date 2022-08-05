#include "hash_tables.h"
#define entries array
/**
 * hash_table_create - creates and initializes an empty hash table
 * @size: number of elements to store in the table
 * Return: pointer to new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	if (!hashtable || size == 0)
		return (NULL);

	/* Allocate table entries */
	hashtable->entries = malloc(sizeof(hash_node_t *) * size);

	/* Check failed malloc */
	if (!hashtable->entries)
	{
		free(hashtable);
		return (NULL);
	}

	/* Set each to null */
	for (i = 0; i < size; i++)
		hashtable->entries[i] = NULL;
	hashtable->size = size;

	return (hashtable);
}
