#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * delete_nodeint_at_index - Deletes a node at a given position
 * @head: A pointer to the first node of the listint_t list
 * @index: The index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);
	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}
previous = NULL;
	current = *head;
	for (i = 0; current != NULL && i < index; i++)
	{
	previous = current;
	current = current->next;
	}
	if (current == NULL)
	return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}

