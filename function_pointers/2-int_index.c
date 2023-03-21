#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  *
  * @array: array where the function will search the integer
  * @size: number of elements in the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: the index of the first element for which
  * the cmp function does not return 0
  * -1 if no element matches
  * if size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (0);

	for (i = 0 ; i < size ; i++)
		if (cmp(array[i]) != 0)
			return (i);
		return (-1);
}
