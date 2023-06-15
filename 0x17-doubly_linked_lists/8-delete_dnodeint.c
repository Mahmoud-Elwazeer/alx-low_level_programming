#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index 
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (temp == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	temp->prev->next = temp->next;
	free (temp);
	return (1);
}
