#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return:  the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (temp == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
