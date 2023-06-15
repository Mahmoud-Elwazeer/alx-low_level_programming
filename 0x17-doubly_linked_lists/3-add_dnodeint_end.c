#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head
 * @n: new value
 * Return: address new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	ptr = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}
