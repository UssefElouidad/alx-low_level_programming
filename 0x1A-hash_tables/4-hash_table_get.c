#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key in a hash table.
 * @ht: The hash table to look up in.
 * @key: The key to look for.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *crnt;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	crnt = ht->array[index];

	while (crnt)
	{
		if (strcmp(crnt->key, key) == 0)
			return (crnt->value);

		crnt = crnt->next;
	}

	return (NULL);
}

