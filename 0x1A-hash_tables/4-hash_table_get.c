#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key we're trying to find
 * Return: Value associated with the key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, j;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (j = index; ht->array[j] != NULL; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			return (ht->array[j]->value);
		}
	}

	return (NULL);
}
