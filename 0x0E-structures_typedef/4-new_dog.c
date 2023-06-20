#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: string in question.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}
/**
 * _strcpy - copies the string pointed to.
 * @dest: the destination.
 * @src: the source
 * Return: the pointer ro dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog -  a function that creates a new dog.
 * @name: first parameter.
 * @age: second parameter
 * @owner: third parameter.
 * Return: a pointer to structer NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

