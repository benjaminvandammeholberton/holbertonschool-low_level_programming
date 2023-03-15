#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc
*
* @b: number of bytes that have to be allocate
*
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *tab;

	tab = (void *) malloc(b);

	if (tab == NULL)
		exit(98);

	return (tab);
}
