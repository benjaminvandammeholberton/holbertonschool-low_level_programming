#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array
 * @grid: 2D array of integers
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
		free(*grid);
}
