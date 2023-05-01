#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * reverse_listint - a function that reverse a listint_t list
 * @head: a pointer to head node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	while (current != NULL)
	{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	}
	*head = prev;
	return (*head);
}

