#include "hash_tables.h"

/**
 * free_node - free node of hash table
 * @node: element in hash table
 *
 * Return: void
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - free table
 * @ht: table
 *
 * Retuen: void
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *temp = ht->array[i];
		if (temp != NULL)
			free_hash_node(temp);
	}
	free(ht->array);
	free(ht);
}
