#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* char *_strdup - function that returns a pointer to a
* newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: pointer on the string that have to be duplicated
* Return: a pointer to the duplicated string.
* NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *strDuplicate;
	int i, j, l = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != 0 ; i++)
		l = l + 1;
	if (str == NULL)
		return (NULL);

	strDuplicate = malloc(sizeof(char) * l+1);
	if (strDuplicate == NULL)
		return (NULL);
	for (j = 0; str[j] != 0; j++)
		strDuplicate[j] = str[j];
	return (strDuplicate);
}
