#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to head of linked
 * @n: data for new node
 * Retunr : address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = (int)n;
	temp->next =  *head;

	*head = temp;
	return (temp);
}
