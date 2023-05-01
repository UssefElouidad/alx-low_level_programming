#include"lists.h"
#include<stdio.h>
/**
 * listint_len - a function that returns
 * the number of elements in a linked list
 * @h: a pointer to header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	current = current->next;
	count++;
	}
	return (count);
}

