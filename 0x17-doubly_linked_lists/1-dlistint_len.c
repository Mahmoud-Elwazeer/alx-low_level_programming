#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head
 * Return: the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	size_t len = 0;

	temp = (dlistint_t *)h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	free(temp);
	return (len);

}
