#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars with a specific char.
 * @size: size of array
 * @c: initializes it with a specific char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return NULL;
	for (i = 0; i < size; i++)
		*(str + i) = c;
	return (str);
}
