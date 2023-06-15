#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp = head;
	while(temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}
