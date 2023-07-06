#include "hash_tables.h"

/**
 * key_index - Gives index of a key
 * @key: the key to get it's index
 * @size: size of the array of the hash table
 * Return: index of a key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
