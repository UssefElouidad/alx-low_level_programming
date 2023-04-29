#include"lists.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * list_len - a function that prints the number of elements
 * @h: a pointer to the list_t
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}

