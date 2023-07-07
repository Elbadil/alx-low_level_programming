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
	unsigned long int index, j;
	char *value_cp, *key_cp;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	for (j = index; ht->array[j] != NULL; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = value_cp;
			return (1);
		}
	}

	new_elmnt = malloc(sizeof(hash_node_t));
	if (new_elmnt == NULL)
		return (0);

	key_cp = strdup(key);
	if (key_cp == NULL)
	{
		free(new_elmnt);
		return (0);
	}

	new_elmnt->key = key_cp;
	new_elmnt->value = value_cp;
	new_elmnt->next = ht->array[index];
	ht->array[index] = new_elmnt;

	return (1);
}
