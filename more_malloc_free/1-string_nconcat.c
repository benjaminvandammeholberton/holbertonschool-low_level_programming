#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *array;
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i;

	for (i = 0; s1[i] != 0; i++)
		l1++;

	for (i = 0; s2[i] != 0; i++)
		l2++;

	if (n > l2)
		n = l2;

	array = malloc(sizeof(char) * (l1 + n + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		array[i] = s1[i];

	for (i = 0; i < n; i++)
		array[i + l1] = s2[i];

	array[l1 + n + 1] = 0;

	return (array);

}
