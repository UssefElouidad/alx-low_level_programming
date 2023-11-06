#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - fucntion that gets the index of a key in a hash table.
 * @key: the key to the hash.
 * @size: size of the hash table's array
 * Return: the index to where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	hash_value = hash_djb2(key);
	return (hash_value % size);
}
