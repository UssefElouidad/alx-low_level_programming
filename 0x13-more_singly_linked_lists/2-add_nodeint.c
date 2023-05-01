#include"lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add-nodeint - a function that adds a new node to the beginnin
 * @head: a pointer to head
 * @n: number
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

