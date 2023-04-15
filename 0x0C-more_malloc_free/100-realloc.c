#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrr, *ptr_old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptrr = malloc(new_size);
	if (!ptrr)
		return (NULL);

	ptr_old = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*(ptrr + i) = *(ptr_old + i);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*(ptrr + i) = *(ptr_old + i);
	}

	free(ptr);
	return (ptrr);
}
