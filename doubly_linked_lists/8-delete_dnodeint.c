#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: head of the list
 * @index: index of the node that should be deleted
 * Return: 1 for success, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!h || !(*h))
	{
		return (-1);
	}
	else
	{
		temp = *h;
		while (index != i++ && temp)
			temp = temp->next;
		if (!temp)
			return (-1);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*h = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
