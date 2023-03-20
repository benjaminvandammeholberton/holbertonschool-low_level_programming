#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure about dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Description: This data structure is about information about dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
