#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - ffunction that frees a list
 * @head: first element of the list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
