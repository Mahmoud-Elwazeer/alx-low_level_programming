#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: number of index
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num; 
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (index > max_index)
		return (-1);
	num = (n >> index) & 1;
	return (num);
}
