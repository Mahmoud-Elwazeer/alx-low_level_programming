#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: hash_table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i == (ht->size - 1))
				continue;
			else
				printf(", ");
		}
	}
	printf("}\n");
}
