#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - function that prints a linked list
 * @h: pointer to the first node.
 * Return: size of the list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
