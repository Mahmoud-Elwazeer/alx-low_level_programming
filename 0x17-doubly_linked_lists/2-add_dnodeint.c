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

	temp->n = (int)n;
	(*head)->prev = temp;
	(*head)->next = NULL;

	return (temp);
}
