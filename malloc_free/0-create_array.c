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
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	array[0] = c;
	for (i = 0 ; i <= size ; i++)
		array[i] = array[0];
	return (array);
}
