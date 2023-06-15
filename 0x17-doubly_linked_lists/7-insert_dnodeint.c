#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: new value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	unsigned int count = 0;
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (temp == NULL || ptr == NULL)
		return (NULL);
	temp = *h;
	while (temp != NULL && count < (idx - 1))
	{
		count++;
		temp = temp->next;
	}
	ptr->n = n;
	ptr->prev = temp;
	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}
