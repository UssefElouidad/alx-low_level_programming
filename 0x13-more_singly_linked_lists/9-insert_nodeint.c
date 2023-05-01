#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value to be added to the new node.
 *
 * Return: If successful - Address of the new node.
 *         Otherwise - NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	 new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	for (i = 0; i < (idx - 1) && temp != NULL; i++)
	temp = temp->next;
	if (temp == NULL)
	{
	free(new);
	return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}

