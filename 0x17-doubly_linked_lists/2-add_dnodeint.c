#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint - a function that adds anew node at the beginning of a list.
 * @head: a pointer to head.
 * @n: the node to add.
 * Return: the @ of the new element or NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *N_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (N_node == NULL)
	{
		return (NULL);
	}
	N_node->n = n;
	if (*head == NULL)
	{
		N_node->prev = NULL;
		N_node->next = NULL;
		*head = N_node;
	}
	else
	{
		N_node->prev = NULL;
		N_node->next = *head;
		(*head)->prev = N_node;
	}
	return (N_node);
}
