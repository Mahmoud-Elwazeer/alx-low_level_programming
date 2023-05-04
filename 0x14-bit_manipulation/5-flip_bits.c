#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: target number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int max_bit = sizeof(unsigned long int) * 8 - 1;
	unsigned int count = 0;
	int i = 0;

	while (i <= max_bit)
	{
		if ((((n >> i) & 1) ^ ((m >> i) & 1)) == 1)
			count++;
		i++;
	}
	return (count);
}
