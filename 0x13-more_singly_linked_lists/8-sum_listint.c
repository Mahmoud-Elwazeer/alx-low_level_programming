#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list
 * @head: node head
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
