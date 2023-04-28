#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to struct
 * Return: void
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
