#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node
 * @idx: index numbde
 * @n: data of new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int i = 0;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	ptr = *head;
	while (ptr != NULL)
	{
		if (idx == i + 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
