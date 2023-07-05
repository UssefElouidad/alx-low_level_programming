#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: the head pointer of the liste.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
