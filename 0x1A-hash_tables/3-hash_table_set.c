#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to the element
 * @value: element's value to be added
 * Return: 1 (success), 0 (failure)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_elmnt;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_elmnt = malloc(sizeof(hash_node_t));
	if (new_elmnt == NULL)
		return (0);

	new_elmnt->key = strdup(key);
	if (new_elmnt->key == NULL)
	{
		free(new_elmnt);
		return (0);
	}

	new_elmnt->value = strdup(value);
	if (new_elmnt->value == NULL)
	{
		free(new_elmnt->key);
		free(new_elmnt);
		return (0);
	}

	new_elmnt->next = ht->array[index];
	ht->array[index] = new_elmnt;

	return (1);
}
