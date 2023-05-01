#include <stdlib.h>
#include"lists.h"
#include<stdio.h>
/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a linked list
 * @head: a pointer to the node head
 * @index: is the index of the node starting at 0
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
	current = current->next;
	i++;
	}
	return (current);
}

