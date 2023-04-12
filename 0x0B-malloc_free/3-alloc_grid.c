#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of column
 * @height: Number of rows
 * Return: eturns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int len = sizeof(int *) * height + sizeof(int) * width * height;
	int **arr = (int **)malloc(len);
	int i, j;

	if (arr == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(arr + height) + width) = 0;
	}
	return (arr);
}
