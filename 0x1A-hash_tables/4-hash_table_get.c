#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - a function that retrives a value associated with a key
 * @ht: the table to retrive the value from
 * @key: key to fin value
 *
 * Return: value associated with key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	return (NULL);
}
