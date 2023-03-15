#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_calloc - function that allocate memory for an array
*
* @nmemb: number of elements of the array
* @size: number of bytes allocated for each element
*
* Return: pointer to the allocated memory, NULL nmemb or size
* is 0 and if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (void *) malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb; i++)
		array[i] = 0;

	return (array);

}
