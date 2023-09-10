#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_list - a function that frees the linked list at a given index.
 * @head: a pointer to the first node of the linked list.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *curent, *tmp;

	curent = head;
	while (curent)
	{
		tmp = curent;
		curent = curent->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}

/**
 * hash_table_delete - a function that deletes a hash table and its contents.
 * @ht: a pointer to the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}

