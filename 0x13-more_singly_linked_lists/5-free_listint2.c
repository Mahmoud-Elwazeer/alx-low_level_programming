#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to the beggining of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
