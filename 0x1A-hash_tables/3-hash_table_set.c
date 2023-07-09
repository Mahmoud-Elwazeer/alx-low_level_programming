#include "hash_tables.h"

/**
 * hash_table_set - t adds an element to the hash table.
 * @ht: hash_table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp = NULL;
	hash_node_t *current_node = NULL;

	if (key == NULL || ht == NULL)
		return (1);
	temp = create_node(key, value);
	index = key_index((const unsigned char *)key, ht->size);
	if (temp == NULL)
		return (1);

	current_node = ht->array[index];
	if (current_node == NULL)
	{
		ht->array[index] = temp;
		return (0);
	}
	else
	{
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (0);
		}
	}
	return (0);
}

/**
 * create_node - create new item in hash
 * @key: key
 * @value: value
 *
 * Return: new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *temp = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);

	return (temp);
}
