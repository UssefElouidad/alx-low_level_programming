#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - a function that frees the dlistint list.
 * @head: the head of the list.
 * Return: Always 0.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *tmp = current;

	while (current != NULL)
	{
		current = current->next;
		free(tmp);
	}
}
