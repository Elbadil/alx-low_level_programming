#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key we're trying to find
 * Return: Value associated with the key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *init_node;
	unsigned long int i;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	init_node = ht->array[i];

	while (init_node != NULL && (strcmp(init_node->key, key) != 0))
	{
		init_node = init_node->next;
	}

	if (init_node != NULL)
		return (init_node->value);

	return (NULL);
}
