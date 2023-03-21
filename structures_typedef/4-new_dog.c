#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 *
 * Return: pointer on the new structure of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecpy, *ownercpy;
	int lenghtname = 0, lenghtowner = 0, i;

	for (i = 0; name[i] != 0; i++)
		lenghtname++;
	for (i = 0; owner[i] != 0; i++)
		lenghtowner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	namecpy = malloc(lenghtname + 1);
	if (namecpy == NULL)
		return (NULL);
	for (i = 0; i < lenghtname + 1; i++)
		namecpy[i] = name[i];
	namecpy[i] = 0;
	ownercpy = malloc(lenghtowner + 1);
	if (ownercpy == NULL)
		return (NULL);
	for (i = 0; ownercpy[i] < lenghtowner + 1; i++)
		ownercpy[i] = owner[i];
	ownercpy[i] = 0;
	new_dog->name = namecpy;
	new_dog->age = age;
	new_dog->owner = ownercpy;
	return (new_dog);
}
