#include "hash_tables.h"
/**
 * hash_table_create - creates and initializes an empty hash table
 * @size: number of elements to store in the table
 * Return: pointer to new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *hashtable = NULL;

	if (size > 0)
		hashtable = malloc(sizeof(hash_table_t));
	/* Only alloc on good input, otherwise quit and return */

	if (!hashtable)
		return (NULL);
	/* Allocate table entries */

	hashtable->array = malloc(sizeof(hash_node_t) * size);
	/* Check failed malloc */

	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}
	/* Set each to null */

	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	hashtable->size = size;

	return (hashtable);
}
