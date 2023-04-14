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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (char *)malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		*(ptr + i) = (char)0;
	return (ptr);
}
