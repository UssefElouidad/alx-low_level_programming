#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * sum_listint - a function that returnsthe sum of all the data
 * @head: a pointer to the head node.
 * Return: 0 ifempty list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}
	return (sum);
}

