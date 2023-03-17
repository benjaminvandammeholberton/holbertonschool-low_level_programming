#include <stdio.h>
#include <stdlib.h>
# include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer on the concatenated string, NULL if fail or ac == 0 or
 * av == NULL
 */

char *argstostr(int ac, char **av)
{

	char *array;
	int i, j, k = 0;
	int lenght = 0;

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != 0; j++)
			lenght = lenght + 1;

	if (ac == 0 || av == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * ac);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			array[k] = av[i][j];

		array[k] = '\n';
	}
	array[k] = 0;

	return (array);
}
