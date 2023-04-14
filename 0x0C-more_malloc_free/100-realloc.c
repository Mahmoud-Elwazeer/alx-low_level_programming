#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
		exit (3);
	else if (new_size == old_size)
		return (ptr);
	else
	{
		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			if (ptr == NULL)
				return (NULL);
		}
		else if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		else
		{
			ptr = malloc(new_size - old_size);
			if (ptr == NULL)
				return (NULL);
			return (ptr);
		}
	}
	return (0);
}
