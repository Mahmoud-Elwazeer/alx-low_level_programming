#include "lists.h"

/**
 * delete_nodeint_at_index - delete the index node
 * @head: head node
 * @index: index number
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}
	temp = ptr;
	ptr = ptr->next;
	free(temp);
	temp = NULL;

	return (1);
}
