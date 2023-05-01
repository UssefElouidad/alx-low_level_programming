#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * pop_listint - a function that deletes the head node of a list
 * @head: the head node
 * Return: the head node data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
	return (0);
	}
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}

