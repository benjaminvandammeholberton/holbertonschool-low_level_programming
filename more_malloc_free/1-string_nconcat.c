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
	unsigned int l1 = 0;
	unsigned int i;
	unsigned int lenght = 0;

	for (i = 0; s1[i] != 0; i++)
		l1++;

	lenght = l1 + n;

	printf("%d\n", lenght);

	concat = (char *) malloc(sizeof(*concat * (lenght + 1)));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concat[i] = s1[i];

	printf("%u\n", n);
	for (i = 0; i < n ; i++)
		concat[i + l1] = s2[i];

	concat[lenght + 1] = 0;

	return (concat);

}
