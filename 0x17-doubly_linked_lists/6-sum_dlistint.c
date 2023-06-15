#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list.
 * @head: head
 * @Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
