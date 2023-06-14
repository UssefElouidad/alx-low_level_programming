#include"main.h"
#include<stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char to create.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
