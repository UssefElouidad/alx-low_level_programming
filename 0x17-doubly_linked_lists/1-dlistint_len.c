#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - a function that couns the number of elements.
 * @h: pointer to head element.
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
