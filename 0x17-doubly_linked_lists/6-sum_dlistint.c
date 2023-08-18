#include "lists.h"
#include <stddef.h>
/**
 * sum_dlistint - a function that returns the sum of all the data(n) of
 * a dlistint_t list.
 * @head: a pointer to the head node.
 * Return: sum of all the data or 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
