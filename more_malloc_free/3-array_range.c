#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *array_range - function that creates an array of integers from
* min to max
* @min: the min value the array start from
* @max: tne max value the array ending
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *array;
	int i;
	int range = max - min;

	array = malloc(sizeof(int) * range);
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < range ; i++)
	array[i] = min + i;

	return (array);

}
