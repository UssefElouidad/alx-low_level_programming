#include<stdio.h>
#include<string.h>
#include "dog.h"
/**
 * init_dog -  a function that initialize a variable of type struct dog.
 * @d: each dog.
 * @name: the name of dog.
 * @age: the age of dog.
 * @owner: the owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
