#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: head node
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (n);
}
