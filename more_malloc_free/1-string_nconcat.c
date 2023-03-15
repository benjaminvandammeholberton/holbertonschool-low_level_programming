#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - function that concatenates two strings
*
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 that have to be concatenate
*
* Return: pointer to a newly allocated space
* NULL if the function fail
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = 0, l2 = 0;
	unsigned int i;
	unsigned int lenght = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != 0; i++)
		l1++;
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != 0; i++)
		l2++;
	}

	if (n <= l2)
		lenght = l1 + n;
	else
		lenght = l1 + l2;

	concat = (char *) malloc(sizeof(*concat * (lenght + 1)));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concat[i] = s1[i];

	for (i = 0; i < n ; i++)
		concat[i + l1] = s2[i];

	concat[lenght] = 0;

	return (concat);

}
