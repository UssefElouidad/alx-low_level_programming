#include "lists.h"
#include <stddef.h>
/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlictint_t list.
 * @index: is the index of the node.
 * @head: pointer to the head node.
 * Return: the nth node or NULL if the nide doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
