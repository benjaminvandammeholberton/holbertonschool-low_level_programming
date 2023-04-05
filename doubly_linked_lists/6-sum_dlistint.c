#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of the list
 * @head:fiurst element of the list
 * Return: the sum of all data, ) if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
