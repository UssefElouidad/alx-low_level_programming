#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - a function that adds a new node at the end.
 * @head: a ponter to the head of the lsit.
 * @n: the node to add.
 * Return: the addresse of new node or NULL if failieur.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *N_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

		if (N_node == NULL)
		{
			return (NULL);
		}
	N_node->n = n;
	N_node->next = NULL;
	if (*head == NULL)
	{
		N_node->prev = NULL;
		*head = N_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		N_node->prev = current;
		current->next = N_node;
	}
	return (N_node);
}
