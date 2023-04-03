#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_list - function that prints all the elements of a list_t list
  * @h: node containing a string, the length of the string
  * Return: the numbers of nodes of the list
  */

size_t print_list(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
