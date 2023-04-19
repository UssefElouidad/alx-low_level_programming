#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - a function that initialize a virable struct dog
 * @d: pointer.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
