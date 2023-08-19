#include"lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at the index of a dlistint_t list.
 * @haad: the head node of the list.
 * @index: is the index of the mode that should be deleted.
 * Return: 1 if succeeded or -1 of failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);

}
