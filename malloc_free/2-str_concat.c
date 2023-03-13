#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *str_concat - function that concatenates two strings.
* @s1: pointer on the first string
* @s2: pointer on the second string
* Return: pointer on the concatenate string.
* NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *strcon;
	int i = 0, j = 0, k = 0, l1 = 0, l2 = 0;

	for (k = 0 ; s1[k] != 0 ; k++)
		l1 = l1 + 1;

	for (k = 0 ; s2[k] != 0 ; k++)
		l2 = l2 + 1;

	strcon = malloc(sizeof(*strcon) * (l1 + l2 + 1));

	if (strcon == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		strcon[i] = s1[i];

	for (j = 0; s2[j] != 0; j++)
		strcon[j + l1] = s2[j];

	strcon[l1 + l2 + 1] = 0;

	if (s1 == NULL || s2 == NULL)
		return (strcon = 0);
	return (strcon);
}
