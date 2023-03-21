#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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
	char *cpyname, *cpyowner;
	int len_name = _strlen(name), len_owner = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(cpyname, name);

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
	{
		free(new_dog);
		free(cpyname);
		return (NULL);
	}
	_strcpy(cpyowner, owner);

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: variable that containt a string
 * Return: the number of caracter that composed the string s
 */

int _strlen(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0')
	{
		n = n + 1;
		i++;
	}
	return (n);
}

/**
 **_strcpy - copies the string from a pointer to another
 *
 *@src: pointer that has the string information
 *@dest: pointer to be copied
 *
 *Return: string copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}
