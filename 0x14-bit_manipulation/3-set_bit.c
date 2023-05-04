#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index.
 * @n: pointer to number
 * @index: number of index
 * Return: the value of a bit at a given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (index > max_index)
		return (-1);
	*n |= (1 << index);
	return (1);
}
