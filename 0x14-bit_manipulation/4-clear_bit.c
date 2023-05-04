#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: number of index
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (index > max_index)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
