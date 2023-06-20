#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog -  a function that creates a new dog.
 * @name: first parameter.
 * @age: second parameter
 * @owner: third parameter.
 * Return: a pointer to structer NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	 size_t name_length = strlen(name);
	 size_t owner_length = strlen(owner);

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	new_dog->name = malloc((name_length + 1) * sizeof(char));
	new_dog->owner = malloc((owner_length + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
        return (NULL);

	strncpy(new_dog->name, name, name_length);
	strncpy(new_dog->owner, owner, owner_length);

	new_dog->name[name_length] = '\0';
	new_dog->owner[owner_length] = '\0';

	new_dog->age = age;

	return (new_dog);
}
