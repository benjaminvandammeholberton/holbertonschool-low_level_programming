#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - function executes a function given
  * as a parameter on each element of an array.
  *
  * @array: array to work on
  * @size: size off the array
  * @action: pointer to the function you need to use
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
		action(array[i]);

}
