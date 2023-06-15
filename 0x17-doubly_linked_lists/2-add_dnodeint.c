#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: new value
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = (int)n;
	temp->prev = NULL;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;

	return (temp);
}
