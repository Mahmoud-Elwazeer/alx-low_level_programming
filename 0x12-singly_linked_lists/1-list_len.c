#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to beginning of start
 * Return: the number of linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0;

	if (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
