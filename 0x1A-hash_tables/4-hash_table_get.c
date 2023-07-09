#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	temp = ht->array[index];
	index = key_index((unsigned const char *)key, ht->size);
	if (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
