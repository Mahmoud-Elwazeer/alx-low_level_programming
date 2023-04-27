#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to first list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		size++;
	}
	return (size);
}
