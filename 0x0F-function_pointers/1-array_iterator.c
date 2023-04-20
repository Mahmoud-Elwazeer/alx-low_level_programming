#include "function_pointers.h"

/**
 * array_iterator - executes function a parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(*(array + i));
	}
	else
		return;
}
