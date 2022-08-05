#include "hash_tables.h"
/**
 * key_index - returns location to store value in hash table
 * @key: string to store
 * @size: number of elements in table
 * Return: location to store @key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
