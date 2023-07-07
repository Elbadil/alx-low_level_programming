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
	char *value_copy;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	new_elmnt = malloc(sizeof(hash_node_t));
	if (new_elmnt == NULL)
	{
		free(value_copy);
		return (0);
	}

	new_elmnt->key = strdup(key);
	if (new_elmnt->key == 0)
	{
		free(value_copy);
		free(new_elmnt);
		return (0);
	}

	new_elmnt->value = value_copy;

	new_elmnt->next = ht->array[index];
	ht->array[index] = new_elmnt;

	return (1);
}
