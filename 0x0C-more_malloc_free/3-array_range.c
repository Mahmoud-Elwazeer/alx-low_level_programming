#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minumum Number
 * @max: max Number
 * Return: array of integers.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size , i = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while(min <= size)
	{
		*(arr + i++) = min++;
	}
	return (arr);
}
