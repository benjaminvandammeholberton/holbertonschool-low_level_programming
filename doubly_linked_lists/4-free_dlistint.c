#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t
 * @head: first element of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
