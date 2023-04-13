#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: size of memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (1);
	return (ptr);
}
