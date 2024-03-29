#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_dnodeint_at_index - afunction that inserts a new node at
 * a given position.
 * @idx: is the index of the list where the node should be added.
 * @h: a pointer to head node.
 * @n: the node to add.
 * Return: the address of the new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
		new_node->n = n;
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = *h;
				if (*h != NULL)
				{
					(*h)->prev = new_node;
				}
				*h = new_node;
				return (new_node);
		}
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
		current->next = new_node;
	return (new_node);
}
