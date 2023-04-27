#include "lists.h"
#include <stdlib.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer of beginning
 * @str: value of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = (list_t *)malloc(sizeof(list_t));

	last = *head;
	new->str = (char *)str;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
