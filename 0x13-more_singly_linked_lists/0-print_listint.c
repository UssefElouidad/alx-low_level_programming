#include"lists.h"
#include<stdio.h>
/**
 * print_listint - a function that prints all elements of a listint_t list
 *
 * @h: a pointer to header
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	count++;
	}
	return (count);
}
