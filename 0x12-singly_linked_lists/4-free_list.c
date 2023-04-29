#include"lists.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * free_list - a function that frees a list_t list
 * @head: a poiter the the head node.
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
