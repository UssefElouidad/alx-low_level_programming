#include"lists.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add-node-end - a funcyion that adds a new node at the end
 * @head: a poiter to the head node.
 * @str: string
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str) {
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return NULL;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return NULL;
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	list_t *current_node = *head;
	while (current_node->next != NULL) 
	{
	current_node = current_node->next;
	}

	current_node->next = new_node;
	}
	return (new_node);
}

