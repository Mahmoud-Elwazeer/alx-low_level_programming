#include "lists.h"

/**
 * listint_len - print all elements of a listint_t
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr = NULL;
	int size = 0;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
