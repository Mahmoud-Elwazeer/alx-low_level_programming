#include "lists.h"

/**
 * print_listint - print all elements of a listint_t
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr = NULL;
	int size = 0;

	ptr = (listint_t *)h;

	while (ptr != NULL)
	{
		size++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (size);
}
