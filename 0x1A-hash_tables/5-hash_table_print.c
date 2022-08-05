#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - prints out all keys and values in a hash table
 * @ht: hash table to print out
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cmp;
	bool notover = false;

	if (!ht || ht->size == 0)
		return;

	putchar('{');

	for (i = 0, cmp = ht->array[i]; i < ht->size; i++, cmp = ht->array[i])
	{
		if (!cmp)
			continue;

		while (cmp)
		{
			if (notover)
				printf(", ");
			printf("'%s': '%s'", cmp->key, cmp->value);

			cmp = cmp->next;

			notover = true;
		}
	}
	printf("}\n");
}
