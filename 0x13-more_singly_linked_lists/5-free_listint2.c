#include"lists.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a poiter to the header node
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
	listint_t *next_node = current_node->next;
	free(current_node);
	current_node = next_node;
	}
	*head = NULL;
}
