#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *create_array - function that creates an array of chars,
* and initializes it with a specific char.
* @size: the size of the array that will be create
* @c: the frirst character of the array
* Return: NULL if size = 0 or iff it fail otherwise pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	array[0] = c;

	return (array);
}
