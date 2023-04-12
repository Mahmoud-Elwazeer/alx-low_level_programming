#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: pointer to pointer
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
