#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	size_t count = 0;

	temp = (dlistint_t *)h;
	while(temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	free(temp);
	return (count);
}
