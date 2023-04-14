#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size
 * Return: allocates memory for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(sizeof(nmemb) * size);
	if (ptr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
