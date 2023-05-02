#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to ponter to head linked
 * @n: data of new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = (int)n;
	temp->next = NULL;

	ptr = *head;
	if ((*head) == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;

	return (temp);
}
