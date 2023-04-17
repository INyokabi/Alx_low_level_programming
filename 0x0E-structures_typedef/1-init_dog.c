#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @a: variable of the struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *a, char *name, float age, char *owner)
{
	if (a == NULL)
		a = malloc(sizeof(struct dog));
	a->name = name;
	a->age = age;
	a->owner = owner;
}
