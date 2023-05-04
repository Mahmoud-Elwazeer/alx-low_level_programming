#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to binary as string
 * Return: Number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	char ch;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		ch = *(b + i);
		if (ch != '1' && ch != '0')
			return (0);
		
		num <<= 1;
		if (ch == '1')
			num |= 1;
		i++;
	}
	return (num);
}
