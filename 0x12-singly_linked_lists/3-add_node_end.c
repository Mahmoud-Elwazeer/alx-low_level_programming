#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end -  adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer of beginning
 * @str: value of node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = (list_t *)malloc(sizeof(list_t));

	last = *head;
	new->str = (char *)str;
	new->len = _strlen((char *)str);
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

/**
 * _strlen - retunr number of string
 * @str: pointer to string
 * Return: NUmber of string
 */
size_t _strlen(char *str)
{
	int size;

	for (size = 0; *(str + size) != '\0'; size++)
		;
	return (size);
}
