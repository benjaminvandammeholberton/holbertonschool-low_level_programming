#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - that returns a pointer to a 2 dimensional array of integers.
* @width: width of the array
* @height: height of the array
* Return: pointer on the array.
* NULL on failure and if width or height = 0.
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

